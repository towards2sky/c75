jQuery( document ).ready(function($) { 
  
$( "div.list-type" ).on( "click", function() {
  var id = $(this).attr('id');
  
  if(id == 'all-type'){
    $('.deal-container').show();
    $('.coup-container').show();
    $('.list-type')
    $('.list-type').removeClass( "active" );
    $(this).addClass('active');
  }else if(id == 'all-coupons'){
    $('.deal-container').hide();
    $('.coup-container').show();
    $('.list-type').removeClass( "active" );
    $(this).addClass('active');
  }else if(id == 'all-deals'){
    $('.deal-container').show();
    $('.coup-container').hide();
    $('.list-type').removeClass( "active" );
    $(this).addClass('active');
  }
});

$('#go-to-shop').on('click',function(){
  
  var shop_url = $.trim($('#shop-url').text());
  if(shop_url && shop_url !='undefine'){
    window.open(shop_url,'_blank');
  }
  
});
$(".show-button").on( "click", function() {
 var id =  $(this).attr('id');
 var afl_url = $.trim($('#url-'+id).html());
 var pid = $(this).parents().eq(2).children(':first-child').attr('id');
 if(pid){
   var win_url = $("#"+pid).find('a:first').attr('href');
 }
  if( Drupal.settings.zclipcopy.coupon_same_page_redirection == 'on'){
      setTimeout(function() {
        //afl_url = 'http://www.google.co.in'; // this only for demo
            window.location.href = afl_url;
        }, 5000);
  }
  if( Drupal.settings.zclipcopy.coupon_new_page_redirection == 'on'){
  window.open(win_url,'_blank');
  }
});

$(".deal-button").on( "click", function() {
 var id =  $(this).attr('id');
 var afl_url = $.trim($('#url-'+id).html());
 var pid = $(this).parents().eq(2).children(':first-child').attr('id');
 if(pid){
   var win_url = $("#"+pid).find('a:first').attr('href');
 }
  if( Drupal.settings.zclipcopy.coupon_same_page_redirection == 'on'){
      setTimeout(function() {
        afl_url = 'http://www.google.co.in';// this only for demo
            window.location.href = afl_url;
        }, 5000);
  }
  if( Drupal.settings.zclipcopy.coupon_new_page_redirection != 'on'){
  window.open(win_url,'_blank');
  }
});
$('.coup-title').on('click',function(){
  var id =  $(this).attr('id');
  var afl_url = $.trim($('#url-coupon'+id).html());
  if( Drupal.settings.zclipcopy.coupon_same_page_redirection == 'on'){
      setTimeout(function() {
        afl_url = 'http://www.google.co.in'; // this only for demo
            window.location.href = afl_url;
        }, 5000);
  }
});

});
