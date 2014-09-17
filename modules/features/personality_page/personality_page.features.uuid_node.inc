<?php
/**
 * @file
 * personality_page.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function personality_page_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Pet Personalities',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd528afe7-b730-446c-a32c-fd722a256199',
  'type' => 'basic_page',
  'language' => 'und',
  'created' => 1410948526,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7751bfc5-2154-4ed9-b376-272a8ad09f19',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. An ea, quae per vinitorem antea consequebatur, per se ipsa curabit? Est, ut dicis, inquit; Duo Reges: constructio interrete. Quae contraria sunt his, malane? Quasi ego id curem, quid ille aiat aut neget. Igitur neque stultorum quisquam beatus neque sapientium non beatus.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. An ea, quae per vinitorem antea consequebatur, per se ipsa curabit? Est, ut dicis, inquit; Duo Reges: constructio interrete. Quae contraria sunt his, malane? Quasi ego id curem, quid ille aiat aut neget. Igitur neque stultorum quisquam beatus neque sapientium non beatus.',
        'safe_summary' => '',
      ),
    ),
  ),
  'metatags' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'print_html_display' => 0,
  'print_html_display_comment' => 0,
  'print_html_display_urllist' => 0,
  'print_pdf_display' => 0,
  'print_pdf_display_comment' => 0,
  'print_pdf_display_urllist' => 0,
  'print_pdf_size' => '',
  'print_pdf_orientation' => '',
  'date' => '2014-09-17 20:08:46 +1000',
);
  return $nodes;
}
