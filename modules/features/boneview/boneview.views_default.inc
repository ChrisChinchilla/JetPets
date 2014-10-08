<?php
/**
 * @file
 * boneview.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function boneview_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bone';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bone';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bone';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Primary Score */
  $handler->display->display_options['fields']['field_primary_score_1']['id'] = 'field_primary_score_1';
  $handler->display->display_options['fields']['field_primary_score_1']['table'] = 'field_data_field_primary_score';
  $handler->display->display_options['fields']['field_primary_score_1']['field'] = 'field_primary_score';
  $handler->display->display_options['fields']['field_primary_score_1']['label'] = '';
  $handler->display->display_options['fields']['field_primary_score_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_primary_score_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_primary_score_1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Secondary Score */
  $handler->display->display_options['fields']['field_secondary_score_1']['id'] = 'field_secondary_score_1';
  $handler->display->display_options['fields']['field_secondary_score_1']['table'] = 'field_data_field_secondary_score';
  $handler->display->display_options['fields']['field_secondary_score_1']['field'] = 'field_secondary_score';
  $handler->display->display_options['fields']['field_secondary_score_1']['label'] = '';
  $handler->display->display_options['fields']['field_secondary_score_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_score_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_secondary_score_1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Primary Pet Character */
  $handler->display->display_options['fields']['field_primary_pet_character']['id'] = 'field_primary_pet_character';
  $handler->display->display_options['fields']['field_primary_pet_character']['table'] = 'field_data_field_primary_pet_character';
  $handler->display->display_options['fields']['field_primary_pet_character']['field'] = 'field_primary_pet_character';
  $handler->display->display_options['fields']['field_primary_pet_character']['label'] = '';
  $handler->display->display_options['fields']['field_primary_pet_character']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_primary_pet_character']['alter']['text'] = '[field_primary_score_1]% [field_primary_pet_character]';
  $handler->display->display_options['fields']['field_primary_pet_character']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_primary_pet_character']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Primary Score */
  $handler->display->display_options['fields']['field_primary_score']['id'] = 'field_primary_score';
  $handler->display->display_options['fields']['field_primary_score']['table'] = 'field_data_field_primary_score';
  $handler->display->display_options['fields']['field_primary_score']['field'] = 'field_primary_score';
  $handler->display->display_options['fields']['field_primary_score']['label'] = '';
  $handler->display->display_options['fields']['field_primary_score']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_primary_score']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Secondary Score */
  $handler->display->display_options['fields']['field_secondary_score']['id'] = 'field_secondary_score';
  $handler->display->display_options['fields']['field_secondary_score']['table'] = 'field_data_field_secondary_score';
  $handler->display->display_options['fields']['field_secondary_score']['field'] = 'field_secondary_score';
  $handler->display->display_options['fields']['field_secondary_score']['label'] = '';
  $handler->display->display_options['fields']['field_secondary_score']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_secondary_score']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Secondary Pet Character */
  $handler->display->display_options['fields']['field_secondary_pet_character']['id'] = 'field_secondary_pet_character';
  $handler->display->display_options['fields']['field_secondary_pet_character']['table'] = 'field_data_field_secondary_pet_character';
  $handler->display->display_options['fields']['field_secondary_pet_character']['field'] = 'field_secondary_pet_character';
  $handler->display->display_options['fields']['field_secondary_pet_character']['label'] = '';
  $handler->display->display_options['fields']['field_secondary_pet_character']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_pet_character']['alter']['text'] = '[field_secondary_score_1]% [field_secondary_pet_character]';
  $handler->display->display_options['fields']['field_secondary_pet_character']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_secondary_pet_character']['settings'] = array(
    'link' => 0,
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'pet' => 'pet',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_caching'] = '6';
  $export['bone'] = $view;

  return $export;
}
