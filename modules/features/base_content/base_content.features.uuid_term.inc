<?php
/**
 * @file
 * base_content.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function base_content_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Cat',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '61179946-2fb7-4d16-b8c8-55c8cd66df5d',
    'vocabulary_machine_name' => 'pet_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'M',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b22a28d7-fb27-43ea-a3d6-bb94b1aeb656',
    'vocabulary_machine_name' => 'pet_sex',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'F',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd75fe5d4-833a-4acb-b505-eb10ba402e3d',
    'vocabulary_machine_name' => 'pet_sex',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Dog',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd9009b6d-8d7b-4ec4-b24d-669461f625a3',
    'vocabulary_machine_name' => 'pet_type',
    'metatags' => array(),
  );
  return $terms;
}
