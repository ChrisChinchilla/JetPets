<?php
/**
 * @file
 * base_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function base_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function base_content_fontyourface_features_default_font() {
  return array(
    'Lobster Two 700 (latin)' => array(
      'name' => 'Lobster Two 700 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Lobster Two&subset=latin#700',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Lobster Two',
      'css_style' => 'normal',
      'css_weight' => 700,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:15:"Lobster Two:700";s:6:"subset";s:5:"latin";}',
    ),
    'Lobster Two 700italic (latin)' => array(
      'name' => 'Lobster Two 700italic (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Lobster Two&subset=latin#700italic',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Lobster Two',
      'css_style' => 'italic',
      'css_weight' => 700,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:21:"Lobster Two:700italic";s:6:"subset";s:5:"latin";}',
    ),
    'Lobster Two italic (latin)' => array(
      'name' => 'Lobster Two italic (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Lobster Two&subset=latin#italic',
      'provider' => 'google_fonts_api',
      'css_selector' => '.field-name-field-pet .node-pet h2',
      'css_family' => 'Lobster Two',
      'css_style' => 'italic',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:18:"Lobster Two:italic";s:6:"subset";s:5:"latin";}',
    ),
    'Lobster Two italic normal' => array(
      'name' => 'Lobster Two italic normal',
      'enabled' => 1,
      'url' => 'http://localhost/#4b8aecacbcdff52fab2e0d341ad88fba',
      'provider' => 'local_fonts',
      'css_selector' => NULL,
      'css_family' => 'Lobster Two',
      'css_style' => 'italic',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:74:"public://fontyourface/local_fonts/Lobster_Two-italic-normal/stylesheet.css";s:8:"font_uri";a:1:{s:8:"truetype";s:81:"public://fontyourface/local_fonts/Lobster_Two-italic-normal/LobsterTwo-Italic.ttf";}}',
    ),
    'Lobster Two regular (latin)' => array(
      'name' => 'Lobster Two regular (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Lobster Two&subset=latin#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Lobster Two',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:19:"Lobster Two:regular";s:6:"subset";s:5:"latin";}',
    ),
    'Lobster regular (cyrillic)' => array(
      'name' => 'Lobster regular (cyrillic)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Lobster&subset=cyrillic#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Lobster',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:15:"Lobster:regular";s:6:"subset";s:8:"cyrillic";}',
    ),
    'Lobster regular (latin)' => array(
      'name' => 'Lobster regular (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Lobster&subset=latin#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Lobster',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:15:"Lobster:regular";s:6:"subset";s:5:"latin";}',
    ),
    'Lobster regular (latin-ext)' => array(
      'name' => 'Lobster regular (latin-ext)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Lobster&subset=latin-ext#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Lobster',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:15:"Lobster:regular";s:6:"subset";s:9:"latin-ext";}',
    ),
    'Ubuntu 300 (latin)' => array(
      'name' => 'Ubuntu 300 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Ubuntu&subset=latin#300',
      'provider' => 'google_fonts_api',
      'css_selector' => '',
      'css_family' => 'Ubuntu',
      'css_style' => 'normal',
      'css_weight' => 300,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:10:"Ubuntu:300";s:6:"subset";s:5:"latin";}',
    ),
    'Ubuntu 700 (latin)' => array(
      'name' => 'Ubuntu 700 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Ubuntu&subset=latin#700',
      'provider' => 'google_fonts_api',
      'css_selector' => '.field-name-field-primary-pet-character .field-name-body',
      'css_family' => 'Ubuntu',
      'css_style' => 'normal',
      'css_weight' => 700,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:10:"Ubuntu:700";s:6:"subset";s:5:"latin";}',
    ),
    'Ubuntu Condensed regular (cyrillic)' => array(
      'name' => 'Ubuntu Condensed regular (cyrillic)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Ubuntu Condensed&subset=cyrillic#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Ubuntu Condensed',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:24:"Ubuntu Condensed:regular";s:6:"subset";s:8:"cyrillic";}',
    ),
    'Ubuntu Condensed regular (cyrillic-ext)' => array(
      'name' => 'Ubuntu Condensed regular (cyrillic-ext)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Ubuntu Condensed&subset=cyrillic-ext#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Ubuntu Condensed',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:24:"Ubuntu Condensed:regular";s:6:"subset";s:12:"cyrillic-ext";}',
    ),
    'Ubuntu Condensed regular (greek)' => array(
      'name' => 'Ubuntu Condensed regular (greek)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Ubuntu Condensed&subset=greek#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Ubuntu Condensed',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:24:"Ubuntu Condensed:regular";s:6:"subset";s:5:"greek";}',
    ),
    'Ubuntu Condensed regular (greek-ext)' => array(
      'name' => 'Ubuntu Condensed regular (greek-ext)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Ubuntu Condensed&subset=greek-ext#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Ubuntu Condensed',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:24:"Ubuntu Condensed:regular";s:6:"subset";s:9:"greek-ext";}',
    ),
    'Ubuntu Condensed regular (latin)' => array(
      'name' => 'Ubuntu Condensed regular (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Ubuntu Condensed&subset=latin#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => '',
      'css_family' => 'Ubuntu Condensed',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:24:"Ubuntu Condensed:regular";s:6:"subset";s:5:"latin";}',
    ),
    'Ubuntu Condensed regular (latin-ext)' => array(
      'name' => 'Ubuntu Condensed regular (latin-ext)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Ubuntu Condensed&subset=latin-ext#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Ubuntu Condensed',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:24:"Ubuntu Condensed:regular";s:6:"subset";s:9:"latin-ext";}',
    ),
    'Ubuntu italic (latin)' => array(
      'name' => 'Ubuntu italic (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Ubuntu&subset=latin#italic',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Ubuntu',
      'css_style' => 'italic',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:13:"Ubuntu:italic";s:6:"subset";s:5:"latin";}',
    ),
    'Ubuntu italic (latin-ext)' => array(
      'name' => 'Ubuntu italic (latin-ext)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Ubuntu&subset=latin-ext#italic',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Ubuntu',
      'css_style' => 'italic',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:13:"Ubuntu:italic";s:6:"subset";s:9:"latin-ext";}',
    ),
  );
}

/**
 * Implements hook_image_default_styles().
 */
function base_content_image_default_styles() {
  $styles = array();

  // Exported image style: 300px_shareable.
  $styles['300px_shareable'] = array(
    'name' => '300px_shareable',
    'label' => '300px Shareable',
    'effects' => array(
      5 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 235,
          'height' => 325,
        ),
        'weight' => -10,
      ),
      2 => array(
        'label' => 'Underlay (background)',
        'help' => 'Choose the file image you wish to use as an background, and position the processed image on it.',
        'effect callback' => 'canvasactions_canvas2file_effect',
        'dimensions callback' => 'canvasactions_canvas2file_dimensions',
        'form callback' => 'canvasactions_canvas2file_form',
        'summary theme' => 'canvasactions_canvas2file_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_canvas2file',
        'data' => array(
          'xpos' => 'center',
          'ypos' => 20,
          'alpha' => 100,
          'path' => 'module://jpgf/images/300px_shareable_bg.png',
          'dimensions' => 'maximum',
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: 600px_shareable.
  $styles['600px_shareable'] = array(
    'name' => '600px_shareable',
    'label' => '600px Shareable',
    'effects' => array(
      7 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 240,
          'height' => 335,
        ),
        'weight' => -10,
      ),
      8 => array(
        'label' => 'Underlay (background)',
        'help' => 'Choose the file image you wish to use as an background, and position the processed image on it.',
        'effect callback' => 'canvasactions_canvas2file_effect',
        'dimensions callback' => 'canvasactions_canvas2file_dimensions',
        'form callback' => 'canvasactions_canvas2file_form',
        'summary theme' => 'canvasactions_canvas2file_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_canvas2file',
        'data' => array(
          'xpos' => 15,
          'ypos' => 15,
          'alpha' => 100,
          'path' => 'module://jpgf/images/600px_shareable_bg.png',
          'dimensions' => 'maximum',
        ),
        'weight' => -9,
      ),
      10 => array(
        'label' => 'Text',
        'help' => 'Add static or dynamic (coded) text to an image.',
        'dimensions passthrough' => TRUE,
        'form callback' => 'image_effects_text_form',
        'effect callback' => 'image_effects_text_effect',
        'summary theme' => 'image_effects_text_summary',
        'module' => 'image_effects_text',
        'name' => 'image_effects_text',
        'data' => array(
          'size' => 22,
          'xpos' => 285,
          'ypos' => 30,
          'halign' => 'left',
          'valign' => 'top',
          'RGB' => array(
            'HEX' => '#003b79',
          ),
          'alpha' => 100,
          'angle' => 0,
          'fontfile' => 'sites/all/fonts/LobsterTwo-Italic.ttf',
          'text_source' => 'text',
          'text' => 'Your pet is a [node:title]',
          'php' => 'if (!$image_context[\'entity\']) {
  return \'No referring entity\';
}
$entity_type = \'node\';
$field_name = \'my_field\';
$entity = $image_context[\'entity\'];
$field = field_get_items($entity_type, $entity, $field_name);
if ($field) {
  return isset($field[0][\'value\']) ? $field[0][\'value\'] : \'No field value\';
}
',
        ),
        'weight' => -8,
      ),
      9 => array(
        'label' => 'Text',
        'help' => 'Add static or dynamic (coded) text to an image.',
        'dimensions passthrough' => TRUE,
        'form callback' => 'image_effects_text_form',
        'effect callback' => 'image_effects_text_effect',
        'summary theme' => 'image_effects_text_summary',
        'module' => 'image_effects_text',
        'name' => 'image_effects_text',
        'data' => array(
          'size' => 10,
          'xpos' => 285,
          'ypos' => 70,
          'halign' => 'left',
          'valign' => 'top',
          'RGB' => array(
            'HEX' => '#003b79',
          ),
          'alpha' => 100,
          'angle' => 0,
          'fontfile' => 'sites/all/fonts/Ubuntu-R.ttf',
          'text_source' => 'text',
          'text' => '[node:body]',
          'php' => 'if (!$image_context[\'entity\']) {
  return \'No referring entity\';
}
$entity_type = \'node\';
$field_name = \'my_field\';
$entity = $image_context[\'entity\'];
$field = field_get_items($entity_type, $entity, $field_name);
if ($field) {
  return isset($field[0][\'value\']) ? $field[0][\'value\'] : \'No field value\';
}
',
        ),
        'weight' => -7,
      ),
    ),
  );

  // Exported image style: cert_main_image.
  $styles['cert_main_image'] = array(
    'name' => 'cert_main_image',
    'label' => 'Cert main Image',
    'effects' => array(
      6 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 700,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -10,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function base_content_node_info() {
  $items = array(
    'contact' => array(
      'name' => t('Contact'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'email' => array(
      'name' => t('Email'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pet' => array(
      'name' => t('Pet'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'pet_character' => array(
      'name' => t('Pet Character'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'survey_response' => array(
      'name' => t('Survey Response'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_view_mode_page_pattern_default().
 */
function base_content_view_mode_page_pattern_default() {
  $vmp_config = array();

  $vmp_config[] = array(
    0 => array(
      'content_type' => 'pet',
      'view_mode' => 'embedded_pet',
      'url_pattern' => '',
      'entity_type' => 'node',
      'show_title' => 0,
      'title' => 'Congratulations [node:title] is a',
    ),
  );
  $vmp_config[] = array(
    0 => array(
      'content_type' => 'pet_character',
      'view_mode' => 'default',
      'url_pattern' => '',
      'entity_type' => 'node',
      'show_title' => 0,
      'title' => '',
    ),
  );
  $vmp_config[] = array(
    0 => array(
      'content_type' => 'pet_character',
      'view_mode' => 'embedded_character',
      'url_pattern' => '',
      'entity_type' => 'node',
      'show_title' => 0,
      'title' => '',
    ),
  );
  $vmp_config[] = array(
    0 => array(
      'content_type' => 'pet_character',
      'view_mode' => 'embedded_secondary_character',
      'url_pattern' => '',
      'entity_type' => 'node',
      'show_title' => 0,
      'title' => '',
    ),
  );
  $vmp_config[] = array(
    0 => array(
      'content_type' => 'pet_character',
      'view_mode' => 'shareable',
      'url_pattern' => 'character/%/small',
      'entity_type' => 'node',
      'show_title' => 0,
      'title' => '',
    ),
  );
  $vmp_config[] = array(
    0 => array(
      'content_type' => 'survey_response',
      'view_mode' => 'default',
      'url_pattern' => '',
      'entity_type' => 'node',
      'show_title' => 0,
      'title' => '',
    ),
  );
  $vmp_config[] = array(
    0 => array(
      'content_type' => 'survey_response',
      'view_mode' => 'print',
      'url_pattern' => '',
      'entity_type' => 'node',
      'show_title' => 0,
      'title' => '',
    ),
  );
  return $vmp_config;
}
