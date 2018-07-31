<?php
/**
 * @file
 * CC badge admin options
 */
/**
 * Admin form: configure CC URI xpath.
 */
function islandora_cc_badge_admin_form($form, $form_settings) {
  $form['islandora_cc_badge_license_field'] = array(
    '#type' => 'textfield',
    '#title' => t('Solr field for Creative Commons license URI'),
    '#description' => t('Solr field that contains the CC license URI.'),
    '#default_value' => variable_get('islandora_cc_badge_license_field', 'dc.rights'),
  );

  return system_settings_form($form);
}

