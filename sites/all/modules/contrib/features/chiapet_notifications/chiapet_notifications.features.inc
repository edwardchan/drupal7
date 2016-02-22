<?php
/**
 * @file
 * chiapet_notifications.features.inc
 */

/**
 * Implements hook_views_api().
 */
function chiapet_notifications_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

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
