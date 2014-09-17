<?php
/**
 * @file
 * personality_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function personality_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pet_personalities';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'personalities' => 'personalities',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-pet_personalities-block_1' => array(
          'module' => 'views',
          'delta' => 'pet_personalities-block_1',
          'region' => 'content',
          'weight' => '0',
        ),
        'views-pet_personalities-block_2' => array(
          'module' => 'views',
          'delta' => 'pet_personalities-block_2',
          'region' => 'content',
          'weight' => '1',
        ),
        'views-pet_personalities-block_3' => array(
          'module' => 'views',
          'delta' => 'pet_personalities-block_3',
          'region' => 'content',
          'weight' => '2',
        ),
        'views-pet_personalities-block_5' => array(
          'module' => 'views',
          'delta' => 'pet_personalities-block_5',
          'region' => 'content',
          'weight' => '3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['pet_personalities'] = $context;

  return $export;
}
