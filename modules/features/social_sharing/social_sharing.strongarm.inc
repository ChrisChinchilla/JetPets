<?php
/**
 * @file
 * social_sharing.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function social_sharing_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_block';
  $strongarm->value = 1;
  $export['social_share_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_block_settings';
  $strongarm->value = array(
    'social_share_theme' => 'social_share_link',
    'social_share_show_label' => 0,
    'social_share_title' => 'My pet is a [node:field-pet:field-primary-pet-character:title]. Find out what yours is by taking the pet personality survey ',
    'social_share_url' => '[site:url]',
    'social_share_description' => 'Find out what yours is by taking the pet personality survey at [site:url]',
    'social_share_image' => '[node:field-primary-pet-character:field_pet_image:field_pet_image:300px_shareable]]',
    'social_share_networks' => array(
      'delicious' => 0,
      'digg' => 0,
      'facebook' => 1,
      'googleplus' => 1,
      'hyves' => 0,
      'linkedin' => 0,
      'msnlive' => 0,
      'myspace' => 0,
      'orkut' => 0,
      'pinterest' => 0,
      'reddit' => 0,
      'stumbleupon' => 0,
      'twitter' => 1,
      'yahoo' => 0,
    ),
  );
  $export['social_share_block_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_description_basic_page';
  $strongarm->value = '[node:body]';
  $export['social_share_description_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_description_contact';
  $strongarm->value = '[node:body]';
  $export['social_share_description_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_description_email';
  $strongarm->value = '[node:body]';
  $export['social_share_description_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_description_pet';
  $strongarm->value = '[node:body]';
  $export['social_share_description_pet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_description_pet_character';
  $strongarm->value = '[node:body]';
  $export['social_share_description_pet_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_description_survey_response';
  $strongarm->value = '[node:body]';
  $export['social_share_description_survey_response'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_enabled_basic_page';
  $strongarm->value = 0;
  $export['social_share_enabled_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_enabled_contact';
  $strongarm->value = 0;
  $export['social_share_enabled_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_enabled_email';
  $strongarm->value = 0;
  $export['social_share_enabled_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_enabled_pet';
  $strongarm->value = 0;
  $export['social_share_enabled_pet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_enabled_pet_character';
  $strongarm->value = 0;
  $export['social_share_enabled_pet_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_enabled_survey_response';
  $strongarm->value = 0;
  $export['social_share_enabled_survey_response'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_image_basic_page';
  $strongarm->value = '';
  $export['social_share_image_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_image_contact';
  $strongarm->value = '';
  $export['social_share_image_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_image_email';
  $strongarm->value = '';
  $export['social_share_image_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_image_pet';
  $strongarm->value = '';
  $export['social_share_image_pet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_image_pet_character';
  $strongarm->value = '';
  $export['social_share_image_pet_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_image_survey_response';
  $strongarm->value = '';
  $export['social_share_image_survey_response'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_label';
  $strongarm->value = array(
    'en' => 'Share to',
  );
  $export['social_share_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_max_desc_length';
  $strongarm->value = '50';
  $export['social_share_max_desc_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_networks_basic_page';
  $strongarm->value = array();
  $export['social_share_networks_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_networks_contact';
  $strongarm->value = array();
  $export['social_share_networks_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_networks_email';
  $strongarm->value = array();
  $export['social_share_networks_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_networks_pet';
  $strongarm->value = array();
  $export['social_share_networks_pet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_networks_pet_character';
  $strongarm->value = array();
  $export['social_share_networks_pet_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_networks_survey_response';
  $strongarm->value = array(
    0 => 'facebook',
    1 => 'twitter',
  );
  $export['social_share_networks_survey_response'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_new_window';
  $strongarm->value = 1;
  $export['social_share_new_window'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_show_label_basic_page';
  $strongarm->value = 0;
  $export['social_share_show_label_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_show_label_contact';
  $strongarm->value = 0;
  $export['social_share_show_label_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_show_label_email';
  $strongarm->value = 0;
  $export['social_share_show_label_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_show_label_pet';
  $strongarm->value = 0;
  $export['social_share_show_label_pet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_show_label_pet_character';
  $strongarm->value = 0;
  $export['social_share_show_label_pet_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_show_label_survey_response';
  $strongarm->value = 0;
  $export['social_share_show_label_survey_response'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_theme_basic_page';
  $strongarm->value = 'social_share_link';
  $export['social_share_theme_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_theme_contact';
  $strongarm->value = 'social_share_link';
  $export['social_share_theme_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_theme_email';
  $strongarm->value = 'social_share_link';
  $export['social_share_theme_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_theme_pet';
  $strongarm->value = 'social_share_link';
  $export['social_share_theme_pet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_theme_pet_character';
  $strongarm->value = 'social_share_link';
  $export['social_share_theme_pet_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_theme_survey_response';
  $strongarm->value = 'social_share_large_icon';
  $export['social_share_theme_survey_response'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_title_basic_page';
  $strongarm->value = '[node:title]';
  $export['social_share_title_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_title_contact';
  $strongarm->value = '[node:title]';
  $export['social_share_title_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_title_email';
  $strongarm->value = '[node:title]';
  $export['social_share_title_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_title_pet';
  $strongarm->value = '[node:title]';
  $export['social_share_title_pet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_title_pet_character';
  $strongarm->value = '[node:title]';
  $export['social_share_title_pet_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_title_survey_response';
  $strongarm->value = '[node:title]';
  $export['social_share_title_survey_response'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_twitter_truncate';
  $strongarm->value = 0;
  $export['social_share_twitter_truncate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_url_basic_page';
  $strongarm->value = '[node:url:absolute]';
  $export['social_share_url_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_url_contact';
  $strongarm->value = '[node:url:absolute]';
  $export['social_share_url_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_url_email';
  $strongarm->value = '[node:url:absolute]';
  $export['social_share_url_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_url_pet';
  $strongarm->value = '[node:url:absolute]';
  $export['social_share_url_pet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_url_pet_character';
  $strongarm->value = '[node:url:absolute]';
  $export['social_share_url_pet_character'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_share_url_survey_response';
  $strongarm->value = '[node:url:absolute]';
  $export['social_share_url_survey_response'] = $strongarm;

  return $export;
}
