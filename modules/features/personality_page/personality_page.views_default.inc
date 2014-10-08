<?php
/**
 * @file
 * personality_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function personality_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pet_personalities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pet Personalities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Pet Personalities';
  $handler->display->display_options['css_class'] = 'page-personalities ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_pet_sex])';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Pet Image */
  $handler->display->display_options['fields']['field_pet_image']['id'] = 'field_pet_image';
  $handler->display->display_options['fields']['field_pet_image']['table'] = 'field_data_field_pet_image';
  $handler->display->display_options['fields']['field_pet_image']['field'] = 'field_pet_image';
  $handler->display->display_options['fields']['field_pet_image']['label'] = '';
  $handler->display->display_options['fields']['field_pet_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pet_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pet_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'pet_character' => 'pet_character',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Male Cats';
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
    'pet_character' => 'pet_character',
  );
  /* Filter criterion: Content: Pet Sex (field_pet_sex) */
  $handler->display->display_options['filters']['field_pet_sex_tid']['id'] = 'field_pet_sex_tid';
  $handler->display->display_options['filters']['field_pet_sex_tid']['table'] = 'field_data_field_pet_sex';
  $handler->display->display_options['filters']['field_pet_sex_tid']['field'] = 'field_pet_sex_tid';
  $handler->display->display_options['filters']['field_pet_sex_tid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['field_pet_sex_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pet_sex_tid']['vocabulary'] = 'pet_sex';
  /* Filter criterion: Content: Pet Type (field_pet_type) */
  $handler->display->display_options['filters']['field_pet_type_tid']['id'] = 'field_pet_type_tid';
  $handler->display->display_options['filters']['field_pet_type_tid']['table'] = 'field_data_field_pet_type';
  $handler->display->display_options['filters']['field_pet_type_tid']['field'] = 'field_pet_type_tid';
  $handler->display->display_options['filters']['field_pet_type_tid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['field_pet_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pet_type_tid']['vocabulary'] = 'pet_type';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Female Cats';
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
    'pet_character' => 'pet_character',
  );
  /* Filter criterion: Content: Pet Sex (field_pet_sex) */
  $handler->display->display_options['filters']['field_pet_sex_tid']['id'] = 'field_pet_sex_tid';
  $handler->display->display_options['filters']['field_pet_sex_tid']['table'] = 'field_data_field_pet_sex';
  $handler->display->display_options['filters']['field_pet_sex_tid']['field'] = 'field_pet_sex_tid';
  $handler->display->display_options['filters']['field_pet_sex_tid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['field_pet_sex_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pet_sex_tid']['vocabulary'] = 'pet_sex';
  /* Filter criterion: Content: Pet Type (field_pet_type) */
  $handler->display->display_options['filters']['field_pet_type_tid']['id'] = 'field_pet_type_tid';
  $handler->display->display_options['filters']['field_pet_type_tid']['table'] = 'field_data_field_pet_type';
  $handler->display->display_options['filters']['field_pet_type_tid']['field'] = 'field_pet_type_tid';
  $handler->display->display_options['filters']['field_pet_type_tid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['field_pet_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pet_type_tid']['vocabulary'] = 'pet_type';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Male Dogs';
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
    'pet_character' => 'pet_character',
  );
  /* Filter criterion: Content: Pet Sex (field_pet_sex) */
  $handler->display->display_options['filters']['field_pet_sex_tid']['id'] = 'field_pet_sex_tid';
  $handler->display->display_options['filters']['field_pet_sex_tid']['table'] = 'field_data_field_pet_sex';
  $handler->display->display_options['filters']['field_pet_sex_tid']['field'] = 'field_pet_sex_tid';
  $handler->display->display_options['filters']['field_pet_sex_tid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['field_pet_sex_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pet_sex_tid']['vocabulary'] = 'pet_sex';
  /* Filter criterion: Content: Pet Type (field_pet_type) */
  $handler->display->display_options['filters']['field_pet_type_tid']['id'] = 'field_pet_type_tid';
  $handler->display->display_options['filters']['field_pet_type_tid']['table'] = 'field_data_field_pet_type';
  $handler->display->display_options['filters']['field_pet_type_tid']['field'] = 'field_pet_type_tid';
  $handler->display->display_options['filters']['field_pet_type_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_pet_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pet_type_tid']['vocabulary'] = 'pet_type';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Female Dogs';
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
    'pet_character' => 'pet_character',
  );
  /* Filter criterion: Content: Pet Sex (field_pet_sex) */
  $handler->display->display_options['filters']['field_pet_sex_tid']['id'] = 'field_pet_sex_tid';
  $handler->display->display_options['filters']['field_pet_sex_tid']['table'] = 'field_data_field_pet_sex';
  $handler->display->display_options['filters']['field_pet_sex_tid']['field'] = 'field_pet_sex_tid';
  $handler->display->display_options['filters']['field_pet_sex_tid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['field_pet_sex_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pet_sex_tid']['vocabulary'] = 'pet_sex';
  /* Filter criterion: Content: Pet Type (field_pet_type) */
  $handler->display->display_options['filters']['field_pet_type_tid']['id'] = 'field_pet_type_tid';
  $handler->display->display_options['filters']['field_pet_type_tid']['table'] = 'field_data_field_pet_type';
  $handler->display->display_options['filters']['field_pet_type_tid']['field'] = 'field_pet_type_tid';
  $handler->display->display_options['filters']['field_pet_type_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_pet_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pet_type_tid']['vocabulary'] = 'pet_type';
  $handler->display->display_options['block_caching'] = '8';
  $export['pet_personalities'] = $view;

  return $export;
}
