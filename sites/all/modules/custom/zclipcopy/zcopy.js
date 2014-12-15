jQuery( document ).ready(function($) { 

  /*
$( ".show-button" ).each(function() {
    var id=jQuery(this).attr("id"); 
    console.log('#copy-'+id);
    $('#copy-'+id).zclip({
      path:Drupal.settings.zclipcopy.moviepath,
       copy:function(){
         conslode.log($('#copy-'+id).text());
			 return $('#copy-'+id).text();
			 },
      afterCopy:function(){
        //alert('hello');
        
        $( "span" ).each(function(){
          $('.show-text').hide();
          $('.show-code').show();
           var span_id=$(this).attr("id");
           $('#'+span_id).html( 'Copy code'); 
        });
        
        $('#'+id).html( 'Code copied..'); 
       var afl_url = $.trim($('#url-'+id).html());
        if( Drupal.settings.zclipcopy.coupon_same_page_redirection == 'on'){
         setTimeout(function() {
                window.location.href = afl_url;
            }, 5000);
      }
      if( Drupal.settings.zclipcopy.coupon_new_page_redirection == 'on'){
       window.open(afl_url,'_blank');
     } 
    }
    });
});
  
*/

$('span#node-copy-button').zclip({
    path:Drupal.settings.zclipcopy.moviepath,
    copy:function(){ return $.trim($('#node-coupon-code').text()); },
    afterCopy:function(){
        $('#node-copy-button').html( 'Code copied'); 
        var afl_url = $.trim($('#url-'+id).html());
        if( Drupal.settings.zclipcopy.coupon_same_page_redirection == 'on'){
         setTimeout(function() { window.location.href = afl_url;}, Drupal.settings.zclipcopy.redirect_delay);
      }
      if( Drupal.settings.zclipcopy.coupon_new_page_redirection == 'on'){
       window.open(afl_url,'_blank');
     } 
    }
});

/*
  $(".coup-title").on("click", function () {
    var id = jQuery(this).attr("id");
    var afl_url = $.trim($('#url-coupon-' + id).html());

    if (Drupal.settings.zclipcopy.coupon_same_page_redirection == 'on') {
      setTimeout(function () {
        window.location.href = afl_url;
      }, Drupal.settings.zclipcopy.redirect_delay);
    }
    if (Drupal.settings.zclipcopy.coupon_new_page_redirection == 'on') {
      window.open(afl_url, '_blank');
    }
  });
  
  */

});
