<?php
/**
 * @file
 * pcm_studio_request_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function pcm_studio_request_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_studio_request_inline1'
  $field_bases['field_studio_request_inline1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_studio_request_inline1',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'pcm_studio_request' => array(
        'columns' => array(
          'target_id' => 'studio_request_id',
        ),
        'table' => 'pcm_studio_request',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(),
      ),
      'profile2_private' => FALSE,
      'target_type' => 'studiorequest',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_studio_request_inline2'
  $field_bases['field_studio_request_inline2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_studio_request_inline2',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'pcm_studio_request' => array(
        'columns' => array(
          'target_id' => 'studio_request_id',
        ),
        'table' => 'pcm_studio_request',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(),
      ),
      'profile2_private' => FALSE,
      'target_type' => 'studiorequest',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
