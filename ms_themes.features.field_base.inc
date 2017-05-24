<?php
/**
 * @file
 * ms_themes.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ms_themes_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_ms_themes'.
  $field_bases['field_ms_themes'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ms_themes',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'ms_themes' => 'ms_themes',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
