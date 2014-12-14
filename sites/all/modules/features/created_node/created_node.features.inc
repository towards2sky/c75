<?php
/**
 * @file
 * created_node.features.inc
 */

/**
 * Implements hook_node_info().
 */
function created_node_node_info() {
  $items = array(
    'add_coupon' => array(
      'name' => t('Add Coupon'),
      'base' => 'node_content',
      'description' => t('Coupon'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
