<?php
/**
 * @file
 * ms_themes.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ms_themes_taxonomy_default_vocabularies() {
  return array(
    'ms_rw_themes' => array(
      'name' => 'Reliefweb Themes',
      'machine_name' => 'ms_rw_themes',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'ms_themes' => array(
      'name' => 'Themes',
      'machine_name' => 'ms_themes',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
