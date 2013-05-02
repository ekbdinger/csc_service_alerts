<?php
/**
 * @file
 * csc_service_alerts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function csc_service_alerts_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'csc_service_alerts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CSC Service Alerts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CSC Service Alerts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: File Attachments */
  $handler->display->display_options['fields']['field_ca_files']['id'] = 'field_ca_files';
  $handler->display->display_options['fields']['field_ca_files']['table'] = 'field_data_field_ca_files';
  $handler->display->display_options['fields']['field_ca_files']['field'] = 'field_ca_files';
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_ca_summary']['id'] = 'field_ca_summary';
  $handler->display->display_options['fields']['field_ca_summary']['table'] = 'field_data_field_ca_summary';
  $handler->display->display_options['fields']['field_ca_summary']['field'] = 'field_ca_summary';
  /* Sort criterion: Content: Alert Date (field_ca_date) */
  $handler->display->display_options['sorts']['field_ca_date_value']['id'] = 'field_ca_date_value';
  $handler->display->display_options['sorts']['field_ca_date_value']['table'] = 'field_data_field_ca_date';
  $handler->display->display_options['sorts']['field_ca_date_value']['field'] = 'field_ca_date_value';
  $handler->display->display_options['sorts']['field_ca_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'csc_service_alerts' => 'csc_service_alerts',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Service Alerts';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'csc-service-alerts';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'CSC Service Alerts';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2 property="dc:title">[title] </h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Alert Date */
  $handler->display->display_options['fields']['field_ca_date']['id'] = 'field_ca_date';
  $handler->display->display_options['fields']['field_ca_date']['table'] = 'field_data_field_ca_date';
  $handler->display->display_options['fields']['field_ca_date']['field'] = 'field_ca_date';
  $handler->display->display_options['fields']['field_ca_date']['label'] = '';
  $handler->display->display_options['fields']['field_ca_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ca_date']['alter']['text'] = '<h5 property="dc:date">[field_ca_date] </h5>';
  $handler->display->display_options['fields']['field_ca_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_date']['settings'] = array(
    'format_type' => 'csc_service_alert',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_ca_summary']['id'] = 'field_ca_summary';
  $handler->display->display_options['fields']['field_ca_summary']['table'] = 'field_data_field_ca_summary';
  $handler->display->display_options['fields']['field_ca_summary']['field'] = 'field_ca_summary';
  $handler->display->display_options['fields']['field_ca_summary']['label'] = '';
  $handler->display->display_options['fields']['field_ca_summary']['element_label_colon'] = FALSE;
  /* Field: Content: File Attachments */
  $handler->display->display_options['fields']['field_ca_files']['id'] = 'field_ca_files';
  $handler->display->display_options['fields']['field_ca_files']['table'] = 'field_data_field_ca_files';
  $handler->display->display_options['fields']['field_ca_files']['field'] = 'field_ca_files';
  $handler->display->display_options['fields']['field_ca_files']['alter']['text'] = '<strong>field_ca_files-fid]</strong>';
  $handler->display->display_options['fields']['field_ca_files']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_ca_files']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_files']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'csc_service_alerts' => 'csc_service_alerts',
  );
  $handler->display->display_options['path'] = 'csc-service-alerts2';
  $export['csc_service_alerts'] = $view;

  return $export;
}
