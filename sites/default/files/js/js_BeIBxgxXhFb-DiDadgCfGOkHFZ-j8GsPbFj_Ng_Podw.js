(function ($) {

/**
 * Attaches double-click behavior to toggle full path of Krumo elements.
 */
Drupal.behaviors.devel = {
  attach: function (context, settings) {

    // Add hint to footnote
    $('.krumo-footnote .krumo-call').once().before('<img style="vertical-align: middle;" title="Click to expand. Double-click to show path." src="' + settings.basePath + 'misc/help.png"/>');

    var krumo_name = [];
    var krumo_type = [];

    function krumo_traverse(el) {
      krumo_name.push($(el).html());
      krumo_type.push($(el).siblings('em').html().match(/\w*/)[0]);

      if ($(el).closest('.krumo-nest').length > 0) {
        krumo_traverse($(el).closest('.krumo-nest').prev().find('.krumo-name'));
      }
    }

    $('.krumo-child > div:first-child', context).dblclick(
      function(e) {
        if ($(this).find('> .krumo-php-path').length > 0) {
          // Remove path if shown.
          $(this).find('> .krumo-php-path').remove();
        }
        else {
          // Get elements.
          krumo_traverse($(this).find('> a.krumo-name'));

          // Create path.
          var krumo_path_string = '';
          for (var i = krumo_name.length - 1; i >= 0; --i) {
            // Start element.
            if ((krumo_name.length - 1) == i)
              krumo_path_string += '$' + krumo_name[i];

            if (typeof krumo_name[(i-1)] !== 'undefined') {
              if (krumo_type[i] == 'Array') {
                krumo_path_string += "[";
                if (!/^\d*$/.test(krumo_name[(i-1)]))
                  krumo_path_string += "'";
                krumo_path_string += krumo_name[(i-1)];
                if (!/^\d*$/.test(krumo_name[(i-1)]))
                  krumo_path_string += "'";
                krumo_path_string += "]";
              }
              if (krumo_type[i] == 'Object')
                krumo_path_string += '->' + krumo_name[(i-1)];
            }
          }
          $(this).append('<div class="krumo-php-path" style="font-family: Courier, monospace; font-weight: bold;">' + krumo_path_string + '</div>');

          // Reset arrays.
          krumo_name = [];
          krumo_type = [];
        }
      }
    );
  }
};

})(jQuery);
;
(function ($) {

/**
 * A progressbar object. Initialized with the given id. Must be inserted into
 * the DOM afterwards through progressBar.element.
 *
 * method is the function which will perform the HTTP request to get the
 * progress bar state. Either "GET" or "POST".
 *
 * e.g. pb = new progressBar('myProgressBar');
 *      some_element.appendChild(pb.element);
 */
Drupal.progressBar = function (id, updateCallback, method, errorCallback) {
  var pb = this;
  this.id = id;
  this.method = method || 'GET';
  this.updateCallback = updateCallback;
  this.errorCallback = errorCallback;

  // The WAI-ARIA setting aria-live="polite" will announce changes after users
  // have completed their current activity and not interrupt the screen reader.
  this.element = $('<div class="progress" aria-live="polite"></div>').attr('id', id);
  this.element.html('<div class="bar"><div class="filled"></div></div>' +
                    '<div class="percentage"></div>' +
                    '<div class="message">&nbsp;</div>');
};

/**
 * Set the percentage and status message for the progressbar.
 */
Drupal.progressBar.prototype.setProgress = function (percentage, message) {
  if (percentage >= 0 && percentage <= 100) {
    $('div.filled', this.element).css('width', percentage + '%');
    $('div.percentage', this.element).html(percentage + '%');
  }
  $('div.message', this.element).html(message);
  if (this.updateCallback) {
    this.updateCallback(percentage, message, this);
  }
};

/**
 * Start monitoring progress via Ajax.
 */
Drupal.progressBar.prototype.startMonitoring = function (uri, delay) {
  this.delay = delay;
  this.uri = uri;
  this.sendPing();
};

/**
 * Stop monitoring progress via Ajax.
 */
Drupal.progressBar.prototype.stopMonitoring = function () {
  clearTimeout(this.timer);
  // This allows monitoring to be stopped from within the callback.
  this.uri = null;
};

/**
 * Request progress data from server.
 */
Drupal.progressBar.prototype.sendPing = function () {
  if (this.timer) {
    clearTimeout(this.timer);
  }
  if (this.uri) {
    var pb = this;
    // When doing a post request, you need non-null data. Otherwise a
    // HTTP 411 or HTTP 406 (with Apache mod_security) error may result.
    $.ajax({
      type: this.method,
      url: this.uri,
      data: '',
      dataType: 'json',
      success: function (progress) {
        // Display errors.
        if (progress.status == 0) {
          pb.displayError(progress.data);
          return;
        }
        // Update display.
        pb.setProgress(progress.percentage, progress.message);
        // Schedule next timer.
        pb.timer = setTimeout(function () { pb.sendPing(); }, pb.delay);
      },
      error: function (xmlhttp) {
        pb.displayError(Drupal.ajaxError(xmlhttp, pb.uri));
      }
    });
  }
};

/**
 * Display errors on the page.
 */
Drupal.progressBar.prototype.displayError = function (string) {
  var error = $('<div class="messages error"></div>').html(string);
  $(this.element).before(error).hide();

  if (this.errorCallback) {
    this.errorCallback(this);
  }
};

})(jQuery);
;
/**
 * @file
 *
 * Implement a modal form.
 *
 * @see modal.inc for documentation.
 *
 * This javascript relies on the CTools ajax responder.
 */

(function ($) {
  // Make sure our objects are defined.
  Drupal.CTools = Drupal.CTools || {};
  Drupal.CTools.Modal = Drupal.CTools.Modal || {};

  /**
   * Display the modal
   *
   * @todo -- document the settings.
   */
  Drupal.CTools.Modal.show = function(choice) {
    var opts = {};

    if (choice && typeof choice == 'string' && Drupal.settings[choice]) {
      // This notation guarantees we are actually copying it.
      $.extend(true, opts, Drupal.settings[choice]);
    }
    else if (choice) {
      $.extend(true, opts, choice);
    }

    var defaults = {
      modalTheme: 'CToolsModalDialog',
      throbberTheme: 'CToolsModalThrobber',
      animation: 'show',
      animationSpeed: 'fast',
      modalSize: {
        type: 'scale',
        width: .8,
        height: .8,
        addWidth: 0,
        addHeight: 0,
        // How much to remove from the inner content to make space for the
        // theming.
        contentRight: 25,
        contentBottom: 45
      },
      modalOptions: {
        opacity: .55,
        background: '#fff'
      }
    };

    var settings = {};
    $.extend(true, settings, defaults, Drupal.settings.CToolsModal, opts);

    if (Drupal.CTools.Modal.currentSettings && Drupal.CTools.Modal.currentSettings != settings) {
      Drupal.CTools.Modal.modal.remove();
      Drupal.CTools.Modal.modal = null;
    }

    Drupal.CTools.Modal.currentSettings = settings;

    var resize = function(e) {
      // When creating the modal, it actually exists only in a theoretical
      // place that is not in the DOM. But once the modal exists, it is in the
      // DOM so the context must be set appropriately.
      var context = e ? document : Drupal.CTools.Modal.modal;

      if (Drupal.CTools.Modal.currentSettings.modalSize.type == 'scale') {
        var width = $(window).width() * Drupal.CTools.Modal.currentSettings.modalSize.width;
        var height = $(window).height() * Drupal.CTools.Modal.currentSettings.modalSize.height;
      }
      else {
        var width = Drupal.CTools.Modal.currentSettings.modalSize.width;
        var height = Drupal.CTools.Modal.currentSettings.modalSize.height;
      }

      // Use the additionol pixels for creating the width and height.
      $('div.ctools-modal-content', context).css({
        'width': width + Drupal.CTools.Modal.currentSettings.modalSize.addWidth + 'px',
        'height': height + Drupal.CTools.Modal.currentSettings.modalSize.addHeight + 'px'
      });
      $('div.ctools-modal-content .modal-content', context).css({
        'width': (width - Drupal.CTools.Modal.currentSettings.modalSize.contentRight) + 'px',
        'height': (height - Drupal.CTools.Modal.currentSettings.modalSize.contentBottom) + 'px'
      });
    }

    if (!Drupal.CTools.Modal.modal) {
      Drupal.CTools.Modal.modal = $(Drupal.theme(settings.modalTheme));
      if (settings.modalSize.type == 'scale') {
        $(window).bind('resize', resize);
      }
    }

    resize();

    $('span.modal-title', Drupal.CTools.Modal.modal).html(Drupal.CTools.Modal.currentSettings.loadingText);
    Drupal.CTools.Modal.modalContent(Drupal.CTools.Modal.modal, settings.modalOptions, settings.animation, settings.animationSpeed);
    $('#modalContent .modal-content').html(Drupal.theme(settings.throbberTheme));

    // Position autocomplete results based on the scroll position of the modal.
    $('#modalContent .modal-content').delegate('input.form-autocomplete', 'keyup', function() {
      $('#autocomplete').css('top', $(this).position().top + $(this).outerHeight() + $(this).offsetParent().filter('#modal-content').scrollTop());
    });
  };

  /**
   * Hide the modal
   */
  Drupal.CTools.Modal.dismiss = function() {
    if (Drupal.CTools.Modal.modal) {
      Drupal.CTools.Modal.unmodalContent(Drupal.CTools.Modal.modal);
    }
  };

  /**
   * Provide the HTML to create the modal dialog.
   */
  Drupal.theme.prototype.CToolsModalDialog = function () {
    var html = ''
    html += '  <div id="ctools-modal">'
    html += '    <div class="ctools-modal-content">' // panels-modal-content
    html += '      <div class="modal-header">';
    html += '        <a class="close" href="#">';
    html +=            Drupal.CTools.Modal.currentSettings.closeText + Drupal.CTools.Modal.currentSettings.closeImage;
    html += '        </a>';
    html += '        <span id="modal-title" class="modal-title">&nbsp;</span>';
    html += '      </div>';
    html += '      <div id="modal-content" class="modal-content">';
    html += '      </div>';
    html += '    </div>';
    html += '  </div>';

    return html;
  }

  /**
   * Provide the HTML to create the throbber.
   */
  Drupal.theme.prototype.CToolsModalThrobber = function () {
    var html = '';
    html += '  <div id="modal-throbber">';
    html += '    <div class="modal-throbber-wrapper">';
    html +=        Drupal.CTools.Modal.currentSettings.throbber;
    html += '    </div>';
    html += '  </div>';

    return html;
  };

  /**
   * Figure out what settings string to use to display a modal.
   */
  Drupal.CTools.Modal.getSettings = function (object) {
    var match = $(object).attr('class').match(/ctools-modal-(\S+)/);
    if (match) {
      return match[1];
    }
  }

  /**
   * Click function for modals that can be cached.
   */
  Drupal.CTools.Modal.clickAjaxCacheLink = function () {
    Drupal.CTools.Modal.show(Drupal.CTools.Modal.getSettings(this));
    return Drupal.CTools.AJAX.clickAJAXCacheLink.apply(this);
  };

  /**
   * Handler to prepare the modal for the response
   */
  Drupal.CTools.Modal.clickAjaxLink = function () {
    Drupal.CTools.Modal.show(Drupal.CTools.Modal.getSettings(this));
    return false;
  };

  /**
   * Submit responder to do an AJAX submit on all modal forms.
   */
  Drupal.CTools.Modal.submitAjaxForm = function(e) {
    var $form = $(this);
    var url = $form.attr('action');

    setTimeout(function() { Drupal.CTools.AJAX.ajaxSubmit($form, url); }, 1);
    return false;
  }

  /**
   * Bind links that will open modals to the appropriate function.
   */
  Drupal.behaviors.ZZCToolsModal = {
    attach: function(context) {
      // Bind links
      // Note that doing so in this order means that the two classes can be
      // used together safely.
      /*
       * @todo remimplement the warm caching feature
       $('a.ctools-use-modal-cache', context).once('ctools-use-modal', function() {
         $(this).click(Drupal.CTools.Modal.clickAjaxCacheLink);
         Drupal.CTools.AJAX.warmCache.apply(this);
       });
        */

      $('area.ctools-use-modal, a.ctools-use-modal', context).once('ctools-use-modal', function() {
        var $this = $(this);
        $this.click(Drupal.CTools.Modal.clickAjaxLink);
        // Create a drupal ajax object
        var element_settings = {};
        if ($this.attr('href')) {
          element_settings.url = $this.attr('href');
          element_settings.event = 'click';
          element_settings.progress = { type: 'throbber' };
        }
        var base = $this.attr('href');
        Drupal.ajax[base] = new Drupal.ajax(base, this, element_settings);
      });

      // Bind buttons
      $('input.ctools-use-modal, button.ctools-use-modal', context).once('ctools-use-modal', function() {
        var $this = $(this);
        $this.click(Drupal.CTools.Modal.clickAjaxLink);
        var button = this;
        var element_settings = {};

        // AJAX submits specified in this manner automatically submit to the
        // normal form action.
        element_settings.url = Drupal.CTools.Modal.findURL(this);
        if (element_settings.url == '') {
          element_settings.url = $(this).closest('form').attr('action');
        }
        element_settings.event = 'click';
        element_settings.setClick = true;

        var base = $this.attr('id');
        Drupal.ajax[base] = new Drupal.ajax(base, this, element_settings);

        // Make sure changes to settings are reflected in the URL.
        $('.' + $(button).attr('id') + '-url').change(function() {
          Drupal.ajax[base].options.url = Drupal.CTools.Modal.findURL(button);
        });
      });

      // Bind our custom event to the form submit
      $('#modal-content form', context).once('ctools-use-modal', function() {
        var $this = $(this);
        var element_settings = {};

        element_settings.url = $this.attr('action');
        element_settings.event = 'submit';
        element_settings.progress = { 'type': 'throbber' }
        var base = $this.attr('id');

        Drupal.ajax[base] = new Drupal.ajax(base, this, element_settings);
        Drupal.ajax[base].form = $this;

        $('input[type=submit], button', this).click(function(event) {
          Drupal.ajax[base].element = this;
          this.form.clk = this;
          // An empty event means we were triggered via .click() and
          // in jquery 1.4 this won't trigger a submit.
          if (event.bubbles == undefined) {
            $(this.form).trigger('submit');
            return false;
          }
        });
      });

      // Bind a click handler to allow elements with the 'ctools-close-modal'
      // class to close the modal.
      $('.ctools-close-modal', context).once('ctools-close-modal')
        .click(function() {
          Drupal.CTools.Modal.dismiss();
          return false;
        });
    }
  };

  // The following are implementations of AJAX responder commands.

  /**
   * AJAX responder command to place HTML within the modal.
   */
  Drupal.CTools.Modal.modal_display = function(ajax, response, status) {
    if ($('#modalContent').length == 0) {
      Drupal.CTools.Modal.show(Drupal.CTools.Modal.getSettings(ajax.element));
    }
    $('#modal-title').html(response.title);
    // Simulate an actual page load by scrolling to the top after adding the
    // content. This is helpful for allowing users to see error messages at the
    // top of a form, etc.
    $('#modal-content').html(response.output).scrollTop(0);

    // Attach behaviors within a modal dialog.
    var settings = response.settings || ajax.settings || Drupal.settings;
    Drupal.attachBehaviors('#modalContent', settings);
  }

  /**
   * AJAX responder command to dismiss the modal.
   */
  Drupal.CTools.Modal.modal_dismiss = function(command) {
    Drupal.CTools.Modal.dismiss();
    $('link.ctools-temporary-css').remove();
  }

  /**
   * Display loading
   */
  //Drupal.CTools.AJAX.commands.modal_loading = function(command) {
  Drupal.CTools.Modal.modal_loading = function(command) {
    Drupal.CTools.Modal.modal_display({
      output: Drupal.theme(Drupal.CTools.Modal.currentSettings.throbberTheme),
      title: Drupal.CTools.Modal.currentSettings.loadingText
    });
  }

  /**
   * Find a URL for an AJAX button.
   *
   * The URL for this gadget will be composed of the values of items by
   * taking the ID of this item and adding -url and looking for that
   * class. They need to be in the form in order since we will
   * concat them all together using '/'.
   */
  Drupal.CTools.Modal.findURL = function(item) {
    var url = '';
    var url_class = '.' + $(item).attr('id') + '-url';
    $(url_class).each(
      function() {
        var $this = $(this);
        if (url && $this.val()) {
          url += '/';
        }
        url += $this.val();
      });
    return url;
  };


  /**
   * modalContent
   * @param content string to display in the content box
   * @param css obj of css attributes
   * @param animation (fadeIn, slideDown, show)
   * @param speed (valid animation speeds slow, medium, fast or # in ms)
   */
  Drupal.CTools.Modal.modalContent = function(content, css, animation, speed) {
    // If our animation isn't set, make it just show/pop
    if (!animation) {
      animation = 'show';
    }
    else {
      // If our animation isn't "fadeIn" or "slideDown" then it always is show
      if (animation != 'fadeIn' && animation != 'slideDown') {
        animation = 'show';
      }
    }

    if (!speed) {
      speed = 'fast';
    }

    // Build our base attributes and allow them to be overriden
    css = jQuery.extend({
      position: 'absolute',
      left: '0px',
      margin: '0px',
      background: '#000',
      opacity: '.55'
    }, css);

    // Add opacity handling for IE.
    css.filter = 'alpha(opacity=' + (100 * css.opacity) + ')';
    content.hide();

    // if we already ahve a modalContent, remove it
    if ( $('#modalBackdrop')) $('#modalBackdrop').remove();
    if ( $('#modalContent')) $('#modalContent').remove();

    // position code lifted from http://www.quirksmode.org/viewport/compatibility.html
    if (self.pageYOffset) { // all except Explorer
    var wt = self.pageYOffset;
    } else if (document.documentElement && document.documentElement.scrollTop) { // Explorer 6 Strict
      var wt = document.documentElement.scrollTop;
    } else if (document.body) { // all other Explorers
      var wt = document.body.scrollTop;
    }

    // Get our dimensions

    // Get the docHeight and (ugly hack) add 50 pixels to make sure we dont have a *visible* border below our div
    var docHeight = $(document).height() + 50;
    var docWidth = $(document).width();
    var winHeight = $(window).height();
    var winWidth = $(window).width();
    if( docHeight < winHeight ) docHeight = winHeight;

    // Create our divs
    $('body').append('<div id="modalBackdrop" style="z-index: 1000; display: none;"></div><div id="modalContent" style="z-index: 1001; position: absolute;">' + $(content).html() + '</div>');

    // Keyboard and focus event handler ensures focus stays on modal elements only
    modalEventHandler = function( event ) {
      target = null;
      if ( event ) { //Mozilla
        target = event.target;
      } else { //IE
        event = window.event;
        target = event.srcElement;
      }

      var parents = $(target).parents().get();
      for (var i = 0; i < parents.length; ++i) {
        var position = $(parents[i]).css('position');
        if (position == 'absolute' || position == 'fixed') {
          return true;
        }
      }
      if( $(target).filter('*:visible').parents('#modalContent').size()) {
        // allow the event only if target is a visible child node of #modalContent
        return true;
      }
      if ( $('#modalContent')) $('#modalContent').get(0).focus();
      return false;
    };
    $('body').bind( 'focus', modalEventHandler );
    $('body').bind( 'keypress', modalEventHandler );

    // Create our content div, get the dimensions, and hide it
    var modalContent = $('#modalContent').css('top','-1000px');
    var mdcTop = wt + ( winHeight / 2 ) - (  modalContent.outerHeight() / 2);
    var mdcLeft = ( winWidth / 2 ) - ( modalContent.outerWidth() / 2);
    $('#modalBackdrop').css(css).css('top', 0).css('height', docHeight + 'px').css('width', docWidth + 'px').show();
    modalContent.css({top: mdcTop + 'px', left: mdcLeft + 'px'}).hide()[animation](speed);

    // Bind a click for closing the modalContent
    modalContentClose = function(){close(); return false;};
    $('.close').bind('click', modalContentClose);

    // Bind a keypress on escape for closing the modalContent
    modalEventEscapeCloseHandler = function(event) {
      if (event.keyCode == 27) {
        close();
        return false;
      }
    };

    $(document).bind('keydown', modalEventEscapeCloseHandler);

    // Close the open modal content and backdrop
    function close() {
      // Unbind the events
      $(window).unbind('resize',  modalContentResize);
      $('body').unbind( 'focus', modalEventHandler);
      $('body').unbind( 'keypress', modalEventHandler );
      $('.close').unbind('click', modalContentClose);
      $('body').unbind('keypress', modalEventEscapeCloseHandler);
      $(document).trigger('CToolsDetachBehaviors', $('#modalContent'));

      // Set our animation parameters and use them
      if ( animation == 'fadeIn' ) animation = 'fadeOut';
      if ( animation == 'slideDown' ) animation = 'slideUp';
      if ( animation == 'show' ) animation = 'hide';

      // Close the content
      modalContent.hide()[animation](speed);

      // Remove the content
      $('#modalContent').remove();
      $('#modalBackdrop').remove();
    };

    // Move and resize the modalBackdrop and modalContent on resize of the window
     modalContentResize = function(){
      // Get our heights
      var docHeight = $(document).height();
      var docWidth = $(document).width();
      var winHeight = $(window).height();
      var winWidth = $(window).width();
      if( docHeight < winHeight ) docHeight = winHeight;

      // Get where we should move content to
      var modalContent = $('#modalContent');
      var mdcTop = ( winHeight / 2 ) - (  modalContent.outerHeight() / 2);
      var mdcLeft = ( winWidth / 2 ) - ( modalContent.outerWidth() / 2);

      // Apply the changes
      $('#modalBackdrop').css('height', docHeight + 'px').css('width', docWidth + 'px').show();
      modalContent.css('top', mdcTop + 'px').css('left', mdcLeft + 'px').show();
    };
    $(window).bind('resize', modalContentResize);

    $('#modalContent').focus();
  };

  /**
   * unmodalContent
   * @param content (The jQuery object to remove)
   * @param animation (fadeOut, slideUp, show)
   * @param speed (valid animation speeds slow, medium, fast or # in ms)
   */
  Drupal.CTools.Modal.unmodalContent = function(content, animation, speed)
  {
    // If our animation isn't set, make it just show/pop
    if (!animation) { var animation = 'show'; } else {
      // If our animation isn't "fade" then it always is show
      if (( animation != 'fadeOut' ) && ( animation != 'slideUp')) animation = 'show';
    }
    // Set a speed if we dont have one
    if ( !speed ) var speed = 'fast';

    // Unbind the events we bound
    $(window).unbind('resize', modalContentResize);
    $('body').unbind('focus', modalEventHandler);
    $('body').unbind('keypress', modalEventHandler);
    $('.close').unbind('click', modalContentClose);
    $(document).trigger('CToolsDetachBehaviors', $('#modalContent'));

    // jQuery magic loop through the instances and run the animations or removal.
    content.each(function(){
      if ( animation == 'fade' ) {
        $('#modalContent').fadeOut(speed, function() {
          $('#modalBackdrop').fadeOut(speed, function() {
            $(this).remove();
          });
          $(this).remove();
        });
      } else {
        if ( animation == 'slide' ) {
          $('#modalContent').slideUp(speed,function() {
            $('#modalBackdrop').slideUp(speed, function() {
              $(this).remove();
            });
            $(this).remove();
          });
        } else {
          $('#modalContent').remove();
          $('#modalBackdrop').remove();
        }
      }
    });
  };

$(function() {
  Drupal.ajax.prototype.commands.modal_display = Drupal.CTools.Modal.modal_display;
  Drupal.ajax.prototype.commands.modal_dismiss = Drupal.CTools.Modal.modal_dismiss;
});

})(jQuery);
;

// Ensure the $ alias is owned by jQuery.
(function($) {

// randomly lock a pane.
// @debug only
Drupal.settings.Panels = Drupal.settings.Panels || {};
Drupal.settings.Panels.RegionLock = {
  10: { 'top': false, 'left': true, 'middle': true }
}

Drupal.PanelsIPE = {
  editors: {},
  bindClickDelete: function(context) {
    $('a.pane-delete:not(.pane-delete-processed)', context)
      .addClass('pane-delete-processed')
      .click(function() {
        if (confirm(Drupal.t('Remove this pane?'))) {
          $(this).parents('div.panels-ipe-portlet-wrapper').fadeOut('medium', function() {
            var $sortable = $(this).closest('.ui-sortable');
            $(this).empty().remove();
            $sortable.trigger('sortremove');
          });
          $(this).parents('div.panels-ipe-display-container').addClass('changed');
        }
        return false;
      });
  }
}


Drupal.behaviors.PanelsIPE = {
  attach: function(context) {
    for (var i in Drupal.settings.PanelsIPECacheKeys) {
      var key = Drupal.settings.PanelsIPECacheKeys[i];
      $('div#panels-ipe-display-' + key + ':not(.panels-ipe-processed)')
        .addClass('panels-ipe-processed')
        .each(function() {
          // If we're replacing an old IPE, clean it up a little.
          if (Drupal.PanelsIPE.editors[key]) {
            Drupal.PanelsIPE.editors[key].editing = false;
          }
          Drupal.PanelsIPE.editors[key] = new DrupalPanelsIPE(key);
          Drupal.PanelsIPE.editors[key].showContainer();
        });
    }
    $('.panels-ipe-hide-bar').once('panels-ipe-hide-bar-processed').click(function() {
      Drupal.PanelsIPE.editors[key].hideContainer();
    });
    Drupal.PanelsIPE.bindClickDelete(context);
  }
};

/**
 * Base object (class) definition for the Panels In-Place Editor.
 *
 * A new instance of this object is instanciated for every unique IPE on a given
 * page.
 *
 * Note that this form is provisional, and we hope to replace it with a more
 * flexible, loosely-coupled model that utilizes separate controllers for the
 * discrete IPE elements. This will result in greater IPE flexibility.
 */
function DrupalPanelsIPE(cache_key, cfg) {
  cfg = cfg || {};
  var ipe = this;
  this.key = cache_key;
  this.lockPath = null;
  this.state = {};
  this.container = $('#panels-ipe-control-container');
  this.control = $('div#panels-ipe-control-' + cache_key);
  this.initButton = $('div.panels-ipe-startedit', this.control);
  this.cfg = cfg;
  this.changed = false;
  this.sortableOptions = $.extend({
    opacity: 0.75, // opacity of sortable while sorting
    items: 'div.panels-ipe-portlet-wrapper',
    handle: 'div.panels-ipe-draghandle',
    cancel: '.panels-ipe-nodrag',
    dropOnEmpty: true
  }, cfg.sortableOptions || {});

  this.regions = [];
  this.sortables = {};

  $(document).bind('CToolsDetachBehaviors', function() {
    // If the IPE is off and the container is not visible, then we need
    // to reshow the container on modal close.
    if (!$('.panels-ipe-form-container', ipe.control).html() && !ipe.container.is(':visible')) {
      ipe.showContainer();
      ipe.cancelLock();
    }

    // If the IPE is on and we've hidden the bar for a modal, we need to
    // re-display it.
    if (ipe.topParent && ipe.topParent.hasClass('panels-ipe-editing') && ipe.container.is(':not(visible)')) {
      ipe.showContainer();
    }
  });


  // If a user navigates away from a locked IPE, cancel the lock in the background.
  $(window).bind('beforeunload', function() {
    if (!ipe.editing) {
      return;
    }

    if (ipe.topParent && ipe.topParent.hasClass('changed')) {
      ipe.changed = true;
    }

    if (ipe.changed) {
      return Drupal.t('This will discard all unsaved changes. Are you sure?');
    }
  });

  // If a user navigates away from a locked IPE, cancel the lock in the background.
  $(window).bind('unload', function() {
    ipe.cancelLock(true);
  });

  /**
   * If something caused us to abort what we were doing, send a background
   * cancel lock request to the server so that we do not leave stale locks
   * hanging around.
   */
  this.cancelLock = function(sync) {
    // If there's a lockpath and an ajax available, inform server to clear lock.
    // We borrow the ajax options from the customize this page link.
    if (ipe.lockPath && Drupal.ajax['panels-ipe-customize-page']) {
      var ajaxOptions = {
        type: 'POST',
        url: ipe.lockPath
      }

      if (sync) {
        ajaxOptions.async = false;
      }

      // Make sure we don't somehow get another one:
      ipe.lockPath = null;

      // Send the request. This is synchronous to prevent being cancelled.
      $.ajax(ajaxOptions);
    }
  }

  this.activateSortable = function(event, ui) {
    if (!Drupal.settings.Panels || !Drupal.settings.Panels.RegionLock) {
      // don't bother if there are no region locks in play.
      return;
    }

    var region = event.data.region;
    var paneId = ui.item.attr('id').replace('panels-ipe-paneid-', '');

    var disabledRegions = false;

    // Determined if this pane is locked out of this region.
    if (!Drupal.settings.Panels.RegionLock[paneId] || Drupal.settings.Panels.RegionLock[paneId][region]) {
      ipe.sortables[region].sortable('enable');
      ipe.sortables[region].sortable('refresh');
    }
    else {
      disabledRegions = true;
      ipe.sortables[region].sortable('disable');
      ipe.sortables[region].sortable('refresh');
    }

    // If we disabled regions, we need to
    if (disabledRegions) {
      $(event.srcElement).bind('dragstop', function(event, ui) {
        // Go through
      });
    }
  };

  // When dragging is stopped, we need to ensure all sortable regions are enabled.
  this.enableRegions = function(event, ui) {
    for (var i in ipe.regions) {
      ipe.sortables[ipe.regions[i]].sortable('enable');
      ipe.sortables[ipe.regions[i]].sortable('refresh');
    }
  }

  this.initSorting = function() {
    var $region = $(this).parents('.panels-ipe-region');
    var region = $region.attr('id').replace('panels-ipe-regionid-', '');
    ipe.sortables[region] = $(this).sortable(ipe.sortableOptions);
    ipe.regions.push(region);
    $(this).bind('sortactivate', {region: region}, ipe.activateSortable);
  };

  this.initEditing = function(formdata) {
    ipe.editing = true;
    ipe.topParent = $('div#panels-ipe-display-' + cache_key);
    ipe.backup = this.topParent.clone();

    // See http://jqueryui.com/demos/sortable/ for details on the configuration
    // parameters used here.
    ipe.changed = false;

    $('div.panels-ipe-sort-container', ipe.topParent).each(ipe.initSorting);

    // Since the connectWith option only does a one-way hookup, iterate over
    // all sortable regions to connect them with one another.
    $('div.panels-ipe-sort-container', ipe.topParent)
      .sortable('option', 'connectWith', ['div.panels-ipe-sort-container']);

    $('div.panels-ipe-sort-container', ipe.topParent).bind('sortupdate', function() {
      ipe.changed = true;
    });

    $('div.panels-ipe-sort-container', ipe.topParent).bind('sortstop', this.enableRegions);

    $('.panels-ipe-form-container', ipe.control).append(formdata);

    $('input:submit:not(.ajax-processed)', ipe.control).addClass('ajax-processed').each(function() {
      var element_settings = {};

      element_settings.url = $(this.form).attr('action');
      element_settings.setClick = true;
      element_settings.event = 'click';
      element_settings.progress = { 'type': 'throbber' };
      element_settings.ipe_cache_key = cache_key;

      var base = $(this).attr('id');
      Drupal.ajax[ipe.base] = new Drupal.ajax(base, this, element_settings);
    });

    // Perform visual effects in a particular sequence.
    // .show() + .hide() cannot have speeds associated with them, otherwise
    // it clears out inline styles.
    $('.panels-ipe-on').show();
    ipe.showForm();
    ipe.topParent.addClass('panels-ipe-editing');

  };

  this.hideContainer = function() {
    ipe.container.slideUp('fast');
  };

  this.showContainer = function() {
    ipe.container.slideDown('normal');
  };

  this.showButtons = function() {
    $('.panels-ipe-form-container').hide();
    $('.panels-ipe-button-container').show();
    ipe.showContainer();
  };

  this.showForm = function() {
    $('.panels-ipe-button-container').hide();
    $('.panels-ipe-form-container').show();
    ipe.showContainer();
  };

  this.endEditing = function() {
    ipe.editing = false;
    ipe.lockPath = null;
    $('.panels-ipe-form-container').empty();
    // Re-show all the IPE non-editing meta-elements
    $('div.panels-ipe-off').show('fast');

    ipe.showButtons();
    // Re-hide all the IPE meta-elements
    $('div.panels-ipe-on').hide();

    $('.panels-ipe-editing').removeClass('panels-ipe-editing');
    $('div.panels-ipe-sort-container.ui-sortable', ipe.topParent).sortable("destroy");
  };

  this.saveEditing = function() {
    $('div.panels-ipe-region', ipe.topParent).each(function() {
      var val = '';
      var region = $(this).attr('id').split('panels-ipe-regionid-')[1];
      $(this).find('div.panels-ipe-portlet-wrapper').each(function() {
        var id = $(this).attr('id').split('panels-ipe-paneid-')[1];
        if (id) {
          if (val) {
            val += ',';
          }
          val += id;
        }
      });
      $('input[name="panel[pane][' +  region + ']"]', ipe.control).val(val);
    });
  }

  this.cancelIPE = function() {
    ipe.hideContainer();
    ipe.topParent.fadeOut('medium', function() {
      ipe.topParent.replaceWith(ipe.backup.clone());
      ipe.topParent = $('div#panels-ipe-display-' + ipe.key);

      // Processing of these things got lost in the cloning, but the classes remained behind.
      // @todo this isn't ideal but I can't seem to figure out how to keep an unprocessed backup
      // that will later get processed.
      $('.ctools-use-modal-processed', ipe.topParent).removeClass('ctools-use-modal-processed');
      $('.pane-delete-processed', ipe.topParent).removeClass('pane-delete-processed');
      ipe.topParent.fadeIn('medium');
      Drupal.attachBehaviors();
    });
  };

  this.cancelEditing = function() {
    if (ipe.topParent.hasClass('changed')) {
      ipe.changed = true;
    }

    if (!ipe.changed || confirm(Drupal.t('This will discard all unsaved changes. Are you sure?'))) {
      this.cancelIPE();
      return true;
    }
    else {
      // Cancel the submission.
      return false;
    }
  };

  this.createSortContainers = function() {
    $('div.panels-ipe-region', this.topParent).each(function() {
      $(this).children('div.panels-ipe-portlet-marker').parent()
        .wrapInner('<div class="panels-ipe-sort-container" />');

      // Move our gadgets outside of the sort container so that sortables
      // cannot be placed after them.
      $('div.panels-ipe-portlet-static', this).each(function() {
        $(this).prependTo($(this).parent().parent());
      });
    });
  }

  this.createSortContainers();

};

$(function() {
  Drupal.ajax.prototype.commands.initIPE = function(ajax, data, status) {
    if (Drupal.PanelsIPE.editors[data.key]) {
      Drupal.PanelsIPE.editors[data.key].initEditing(data.data);
      Drupal.PanelsIPE.editors[data.key].lockPath = data.lockPath;
    }
    Drupal.attachBehaviors();

  };

  Drupal.ajax.prototype.commands.IPEsetLockState = function(ajax, data, status) {
    if (Drupal.PanelsIPE.editors[data.key]) {
      Drupal.PanelsIPE.editors[data.key].lockPath = data.lockPath;
    }
  };

  Drupal.ajax.prototype.commands.addNewPane = function(ajax, data, status) {
    if (Drupal.PanelsIPE.editors[data.key]) {
      Drupal.PanelsIPE.editors[data.key].changed = true;
    }
  };

  Drupal.ajax.prototype.commands.cancelIPE = function(ajax, data, status) {
    if (Drupal.PanelsIPE.editors[data.key]) {
      Drupal.PanelsIPE.editors[data.key].cancelIPE();
      Drupal.PanelsIPE.editors[data.key].endEditing();
    }
  };

  Drupal.ajax.prototype.commands.unlockIPE = function(ajax, data, status) {
    if (confirm(data.message)) {
      var ajaxOptions = ajax.options;
      ajaxOptions.url = data.break_path;
      $.ajax(ajaxOptions);
    }
    else {
      Drupal.PanelsIPE.editors[data.key].endEditing();
    }
  };

  Drupal.ajax.prototype.commands.endIPE = function(ajax, data, status) {
    if (Drupal.PanelsIPE.editors[data.key]) {
      Drupal.PanelsIPE.editors[data.key].endEditing();
    }
  };

  Drupal.ajax.prototype.commands.insertNewPane = function(ajax, data, status) {
    IPEContainerSelector = '#panels-ipe-regionid-' + data.regionId + ' div.panels-ipe-sort-container';
    firstPaneSelector = IPEContainerSelector + ' div.panels-ipe-portlet-wrapper:first';
    // Insert the new pane before the first existing pane in the region, if
    // any.
    if ($(firstPaneSelector).length) {
      insertData = {
        'method': 'before',
        'selector': firstPaneSelector,
        'data': data.renderedPane,
        'settings': null
      }
      Drupal.ajax.prototype.commands.insert(ajax, insertData, status);
    }
    // Else, insert it as a first child of the container. Doing so might fall
    // outside of the wrapping markup for the style, but it's the best we can
    // do.
    else {
      insertData = {
        'method': 'prepend',
        'selector': IPEContainerSelector,
        'data': data.renderedPane,
        'settings': null
      }
      Drupal.ajax.prototype.commands.insert(ajax, insertData, status);
    }
  };

  /**
   * Override the eventResponse on ajax.js so we can add a little extra
   * behavior.
   */
  Drupal.ajax.prototype.ipeReplacedEventResponse = Drupal.ajax.prototype.eventResponse;
  Drupal.ajax.prototype.eventResponse = function (element, event) {
    if (element.ipeCancelThis) {
      element.ipeCancelThis = null;
      return false;
    }

    if ($(this.element).attr('id') == 'panels-ipe-cancel') {
      if (!Drupal.PanelsIPE.editors[this.element_settings.ipe_cache_key].cancelEditing()) {
        return false;
      }
    }

    var retval = this.ipeReplacedEventResponse(element, event);
    if (this.ajaxing && this.element_settings.ipe_cache_key) {
      // Move the throbber so that it appears outside our container.
      if (this.progress.element) {
        $(this.progress.element).addClass('ipe-throbber').appendTo($('body'));
      }
      Drupal.PanelsIPE.editors[this.element_settings.ipe_cache_key].hideContainer();
    }
    // @TODO $('#panels-ipe-throbber-backdrop').remove();
    return retval;
  };

  /**
   * Override the eventResponse on ajax.js so we can add a little extra
   * behavior.
   */
  Drupal.ajax.prototype.ipeReplacedError = Drupal.ajax.prototype.error;
  Drupal.ajax.prototype.error = function (response, uri) {
    var retval = this.ipeReplacedError(response, uri);
    if (this.element_settings.ipe_cache_key) {
      Drupal.PanelsIPE.editors[this.element_settings.ipe_cache_key].showContainer();
    }
  };

  Drupal.ajax.prototype.ipeReplacedBeforeSerialize = Drupal.ajax.prototype.beforeSerialize;
  Drupal.ajax.prototype.beforeSerialize = function (element_settings, options) {
    if ($(this.element).hasClass('panels-ipe-save')) {
      Drupal.PanelsIPE.editors[this.element_settings.ipe_cache_key].saveEditing();
    };
    return this.ipeReplacedBeforeSerialize(element_settings, options);
  };

});

/**
 * Apply margin to bottom of the page.
 *
 * Note that directly applying marginBottom does not work in IE. To prevent
 * flickering/jumping page content with client-side caching, this is a regular
 * Drupal behavior.
 *
 * @see admin_menu.js via https://drupal.org/project/admin_menu
 */
Drupal.behaviors.panelsIpeMarginBottom = {
  attach: function () {
    $('body:not(.panels-ipe)').addClass('panels-ipe');
  }
};

})(jQuery);
;
(function ($) {

Drupal.toolbar = Drupal.toolbar || {};

/**
 * Attach toggling behavior and notify the overlay of the toolbar.
 */
Drupal.behaviors.toolbar = {
  attach: function(context) {

    // Set the initial state of the toolbar.
    $('#toolbar', context).once('toolbar', Drupal.toolbar.init);

    // Toggling toolbar drawer.
    $('#toolbar a.toggle', context).once('toolbar-toggle').click(function(e) {
      Drupal.toolbar.toggle();
      // Allow resize event handlers to recalculate sizes/positions.
      $(window).triggerHandler('resize');
      return false;
    });
  }
};

/**
 * Retrieve last saved cookie settings and set up the initial toolbar state.
 */
Drupal.toolbar.init = function() {
  // Retrieve the collapsed status from a stored cookie.
  var collapsed = $.cookie('Drupal.toolbar.collapsed');

  // Expand or collapse the toolbar based on the cookie value.
  if (collapsed == 1) {
    Drupal.toolbar.collapse();
  }
  else {
    Drupal.toolbar.expand();
  }
};

/**
 * Collapse the toolbar.
 */
Drupal.toolbar.collapse = function() {
  var toggle_text = Drupal.t('Show shortcuts');
  $('#toolbar div.toolbar-drawer').addClass('collapsed');
  $('#toolbar a.toggle')
    .removeClass('toggle-active')
    .attr('title',  toggle_text)
    .html(toggle_text);
  $('body').removeClass('toolbar-drawer').css('paddingTop', Drupal.toolbar.height());
  $.cookie(
    'Drupal.toolbar.collapsed',
    1,
    {
      path: Drupal.settings.basePath,
      // The cookie should "never" expire.
      expires: 36500
    }
  );
};

/**
 * Expand the toolbar.
 */
Drupal.toolbar.expand = function() {
  var toggle_text = Drupal.t('Hide shortcuts');
  $('#toolbar div.toolbar-drawer').removeClass('collapsed');
  $('#toolbar a.toggle')
    .addClass('toggle-active')
    .attr('title',  toggle_text)
    .html(toggle_text);
  $('body').addClass('toolbar-drawer').css('paddingTop', Drupal.toolbar.height());
  $.cookie(
    'Drupal.toolbar.collapsed',
    0,
    {
      path: Drupal.settings.basePath,
      // The cookie should "never" expire.
      expires: 36500
    }
  );
};

/**
 * Toggle the toolbar.
 */
Drupal.toolbar.toggle = function() {
  if ($('#toolbar div.toolbar-drawer').hasClass('collapsed')) {
    Drupal.toolbar.expand();
  }
  else {
    Drupal.toolbar.collapse();
  }
};

Drupal.toolbar.height = function() {
  var $toolbar = $('#toolbar');
  var height = $toolbar.outerHeight();
  // In modern browsers (including IE9), when box-shadow is defined, use the
  // normal height.
  var cssBoxShadowValue = $toolbar.css('box-shadow');
  var boxShadow = (typeof cssBoxShadowValue !== 'undefined' && cssBoxShadowValue !== 'none');
  // In IE8 and below, we use the shadow filter to apply box-shadow styles to
  // the toolbar. It adds some extra height that we need to remove.
  if (!boxShadow && /DXImageTransform\.Microsoft\.Shadow/.test($toolbar.css('filter'))) {
    height -= $toolbar[0].filters.item("DXImageTransform.Microsoft.Shadow").strength;
  }
  return height;
};

})(jQuery);
;
