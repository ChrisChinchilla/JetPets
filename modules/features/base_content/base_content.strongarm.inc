<?php
/**
 * @file
 * base_content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function base_content_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__contact';
  $strongarm->value = array(
    'view_modes' => array(
      'shareable' => array(
        'custom_settings' => FALSE,
      ),
      'embedded_pet' => array(
        'custom_settings' => FALSE,
      ),
      'embedded_character' => array(
        'custom_settings' => FALSE,
      ),
      'embedded_secondary_character' => array(
        'custom_settings' => FALSE,
      ),
      'email_share' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__email';
  $strongarm->value = array(
    'view_modes' => array(
      'shareable' => array(
        'custom_settings' => FALSE,
      ),
      'embedded_pet' => array(
        'custom_settings' => FALSE,
      ),
      'embedded_character' => array(
        'custom_settings' => FALSE,
      ),
      'embedded_secondary_character' => array(
        'custom_settings' => FALSE,
      ),
      'email_share' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__pet';
  $strongarm->value = array(
    'view_modes' => array(
      'shareable' => array(
        'custom_settings' => FALSE,
      ),
      'embedded_pet' => array(
        'custom_settings' => TRUE,
      ),
      'embedded_character' => array(
        'custom_settings' => FALSE,
      ),
      'embedded_secondary_character' => array(
        'custom_settings' => FALSE,
      ),
      'email_share' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '11',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__pet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__pet_character';
  $strongarm->value = array(
    'view_modes' => array(
      'shareable' => array(
        'custom_settings' => TRUE,
      ),
      'embedded_pet' => array(
        'custom_settings' => FALSE,
      ),
      'embedded_character' => array(
        'custom_settings' => TRUE,
      ),
      'embedded_secondary_character' => array(
        'custom_settings' => TRUE,
      ),
      'email_share' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__pet_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__survey_response';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'print' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'shareable' => array(
        'custom_settings' => FALSE,
      ),
      'embedded_pet' => array(
        'custom_settings' => FALSE,
      ),
      'embedded_character' => array(
        'custom_settings' => FALSE,
      ),
      'embedded_secondary_character' => array(
        'custom_settings' => FALSE,
      ),
      'email_share' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(
        'social_share' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'print' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__survey_response'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_contact';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_email';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_pet';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_pet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_pet_character';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_pet_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_survey_response';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_survey_response'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_contact';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_email';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_pet';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_pet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_pet_character';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_pet_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_survey_response';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_survey_response'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_contact';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_email';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_pet';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_pet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_pet_character';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_pet_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_survey_response';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_survey_response'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_contact';
  $strongarm->value = '0';
  $export['node_preview_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_email';
  $strongarm->value = '0';
  $export['node_preview_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_pet';
  $strongarm->value = '0';
  $export['node_preview_pet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_pet_character';
  $strongarm->value = '0';
  $export['node_preview_pet_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_survey_response';
  $strongarm->value = '0';
  $export['node_preview_survey_response'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_contact';
  $strongarm->value = 0;
  $export['node_submitted_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_email';
  $strongarm->value = 0;
  $export['node_submitted_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_pet';
  $strongarm->value = 0;
  $export['node_submitted_pet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_pet_character';
  $strongarm->value = 0;
  $export['node_submitted_pet_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_survey_response';
  $strongarm->value = 0;
  $export['node_submitted_survey_response'] = $strongarm;

  return $export;
}
