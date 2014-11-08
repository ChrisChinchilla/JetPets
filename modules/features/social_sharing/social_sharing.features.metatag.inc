<?php
/**
 * @file
 * social_sharing.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function social_sharing_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:pet_character.
  $config['node:pet_character'] = array(
    'instance' => 'node:pet_character',
    'disabled' => TRUE,
    'config' => array(
      'title' => array(
        'value' => 'My pet is a [node:title]. Find out what yours is by taking the pet personality survey',
      ),
      'og:title' => array(
        'value' => 'My pet is a [node:title]. Find out what yours is by taking the pet personality survey',
      ),
      'og:image' => array(
        'value' => '[node:field_pet_image:600px_shareable]',
      ),
      'twitter:card' => array(
        'value' => 'summary_large_image',
      ),
      'twitter:image:src' => array(
        'value' => '[node:field_pet_image:600px_shareable]',
      ),
    ),
  );

  // Exported Metatag config instance: node:survey_response.
  $config['node:survey_response'] = array(
    'instance' => 'node:survey_response',
    'config' => array(
      'title' => array(
        'value' => 'My pet is a [node:field-pet:field-primary-pet-character:title]',
      ),
      'description' => array(
        'value' => 'My pet is a [node:field-pet:field-primary-pet-character:title]. Find out what yours is by taking the pet personality survey',
      ),
      'og:url' => array(
        'value' => '[node:url]',
      ),
      'og:title' => array(
        'value' => 'My pet is a [node:field-pet:field-primary-pet-character:title]. Find out what yours is by taking the pet personality survey at [site:url]',
      ),
      'og:description' => array(
        'value' => 'My pet is a [node:field-pet:field-primary-pet-character:title]. Find out what yours is by taking the pet personality survey at [site:url]',
      ),
      'og:image' => array(
        'value' => '[node:field-pet:field-primary-pet-character:field_pet_image:600px_shareable]',
      ),
      'twitter:url' => array(
        'value' => '[node:url]',
      ),
      'twitter:title' => array(
        'value' => 'My pet is a [node:field-pet:field-primary-pet-character:title]. Find out what yours is by taking the pet personality survey at [site:url]',
      ),
      'twitter:description' => array(
        'value' => 'My pet is a [node:field-pet:field-primary-pet-character:title]. Find out what yours is by taking the pet personality survey at [site:url]',
      ),
      'twitter:image:src' => array(
        'value' => '[node:field-pet:field-primary-pet-character:field_pet_image:600px_shareable]',
      ),
    ),
  );

  return $config;
}
