<?php
/**
 * @file
 * csc_service_alerts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function csc_service_alerts_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function csc_service_alerts_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function csc_service_alerts_node_info() {
  $items = array(
    'csc_service_alerts' => array(
      'name' => t('CSC Service Alerts'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
