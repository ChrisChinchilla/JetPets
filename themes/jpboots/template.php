<?php

function jpboots_preprocess_node(&$variables) {
    if(($variables['type'] == 'pet_character') && ($variables['view_mode'] == 'embedded_secondary_character')) {
        $variables['second_block_header'] = '<b>OFFICIAL RESULTS:</b> Your pet shows the characteristics of these two main personality types';
        $variables['second_block_footer'] = 'Read More at <a href="http://www.petquiz.com.au/personalities" target="_blank">www.petquiz.com.au/personalities</a>';
    }

    if(($variables['type'] == 'pet') && ($variables['view_mode'] == 'embedded_pet')) {
        $_SESSION['petID'] = $variables['nid'];
        //dpm($variables);
//        $total = $variables['field_primary_score'][0]['value'] + $variables['field_secondary_score'][0]['value'];
//        $variables['primPerc'] = ceil(($variables['field_primary_score'][0]['value'] / $total) * 100) . '% ' . $variables['field_primary_pet_character'][0]['entity']->title  ;
//        $variables['secPerc'] = floor(($variables['field_secondary_score'][0]['value'] / $total) * 100) . '% ' . $variables['field_secondary_pet_character'][0]['entity']->title ;
    }
}