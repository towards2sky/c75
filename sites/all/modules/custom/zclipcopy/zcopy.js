jQuery( document ).ready(function($) { 
  
$( ".button-secondary" ).each(function() {
    var id=jQuery(this).attr("id"); 
    $('span#'+id).zclip({
      path:Drupal.settings.zclipcopy.moviepath, 
         copy:function(){
			 return $('#copy-'+id).text();
			 },
      afterCopy:function(){
        $( "span" ).each(function(){ 
           var span_id=$(this).attr("id");
           $('#'+span_id).html( 'Copy Title'); 
        });
        $('#'+id).html( 'coupon-copied'); 
       
        if( Drupal.settings.zclipcopy.coupon_same_page_redirection == 'on' ){
         setTimeout(function() {
                window.location.href = 'http://www.google.com';
            }, 5000);
      }
      if( Drupal.settings.zclipcopy.coupon_new_page_redirection == 'on' ){
       window.open('http://localhost/drupalcoup/node/19','_blank');
     } 
    }
    });
});

});
