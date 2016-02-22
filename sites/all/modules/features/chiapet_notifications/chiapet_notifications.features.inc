<?php
/**
 * @file
 * chiapet_notifications.features.inc
 */

/**
 * Implements hook_node_info().
 */
function chiapet_notifications_node_info() {
  $items = array(
    'notification' => array(
      'name' => t('Notification'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
