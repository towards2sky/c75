<?php 
/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */

$nobj = $row->_field_data['nid']['entity'];
$alias = drupal_get_path_alias('node/'.$nobj->nid);
$body = render(field_view_field('node', $nobj, 'body',array('label'=>'hidden'))); 
$field_coupon_url = field_get_items('node', $nobj, 'field_coupon_url'); 
$field_coupon_code = field_get_items('node', $nobj, 'field_coupon_code'); 
$title = l(t($nobj->title), $alias, array('attributes' => array('target' => '_blank')));
$discount_type = field_get_items('node', $nobj, 'field_coupon_type'); 
?>

<?php if(trim($discount_type[0]['value']) == 'Coupon'){ ?>            
<div id="coup-container-<?php print $nobj->nid;?>" class="coup-container">
<div id="<?php print $nobj->nid;?>" class="coup-title"><?php print $title; ?></div>
<div id="coup-deal">
 <!--            <div id="coup-code">
             <div id="copy-coupon-<?php print $nobj->nid;?>" class="show-code"><?php print trim($field_coupon_code[0]['value']);?></div>
             <div id="show-<?php print $nobj->nid;?>" class="show-text">Show Code</div>
             </div>
  -->
             <div id="coup-button">
             <span id="coupon-<?php print $nobj->nid;?>" class="show-button" active="0" >View Coupon</span>
            </div>
  
<div id="url-coupon-<?php print $nobj->nid;?>" class="coup-url"><?php print trim($field_coupon_url[0]['value']);?></div>
</div>
<div id="coup-desc"><?php print $body;?></div>
<div id="coup-verified">Verified</div>
</div>  
<?php }else if(trim($discount_type[0]['value']) == 'Deal'){ ?>
<div id="deal-container-<?php print $nobj->nid;?>" class="deal-container">
<div id="<?php print $nobj->nid;?>" class="coup-title"><?php print $title; ?></div>
<div id="coup-deal">            
            <div id="deal-button">
             <span id="deal-<?php print $nobj->nid;?>" class="deal-button button" active="0" >View Deal</span>
            </div>
<div id="url-coupon-<?php print $nobj->nid;?>" class="coup-url"><?php print trim($field_coupon_url[0]['value']);?></div>
</div>
<div id="coup-desc"><?php print $body;?></div>
<div id="coup-verified">Verified</div>
</div>
<?php } ?>
