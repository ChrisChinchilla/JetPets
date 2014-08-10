<?php
/**
 * @file
 * base_content.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function base_content_taxonomy_default_vocabularies() {
  return array(
    'pet_sex' => array(
      'name' => 'Pet Sex',
      'machine_name' => 'pet_sex',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'pet_type' => array(
      'name' => 'Pet Type',
      'machine_name' => 'pet_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
