<?php
/**
 * @file
 * pcm_studio_request_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function pcm_studio_request_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-project_renewal_season_-field_studio_request_inline1'
  $field_instances['node-project_renewal_season_-field_studio_request_inline1'] = array(
    'bundle' => 'project_renewal_season_',
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'custom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_studio_request_inline1',
    'label' => 'Studio Request 1',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => FALSE,
          'delete_references' => 0,
          'label_plural' => 'entities',
          'label_singular' => 'entity',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form_single',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-project_renewal_season_-field_studio_request_inline2'
  $field_instances['node-project_renewal_season_-field_studio_request_inline2'] = array(
    'bundle' => 'project_renewal_season_',
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'custom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_studio_request_inline2',
    'label' => 'Studio Request 2',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => FALSE,
          'delete_references' => 0,
          'label_plural' => 'entities',
          'label_singular' => 'entity',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form_single',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'studiorequest-studiorequest-field_open_days'
  $field_instances['studiorequest-studiorequest-field_open_days'] = array(
    'bundle' => 'studiorequest',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'studiorequest',
    'field_name' => 'field_open_days',
    'label' => 'Day',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'studiorequest-studiorequest-field_studio_req_duration'
  $field_instances['studiorequest-studiorequest-field_studio_req_duration'] = array(
    'bundle' => 'studiorequest',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'studiorequest',
    'field_name' => 'field_studio_req_duration',
    'label' => 'Request Duration',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'studiorequest-studiorequest-field_studio_timeslot'
  $field_instances['studiorequest-studiorequest-field_studio_timeslot'] = array(
    'bundle' => 'studiorequest',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'studiorequest',
    'field_name' => 'field_studio_timeslot',
    'label' => 'Studio Timeslot',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'studiorequest-studiorequest-field_studio_type'
  $field_instances['studiorequest-studiorequest-field_studio_type'] = array(
    'bundle' => 'studiorequest',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'studiorequest',
    'field_name' => 'field_studio_type',
    'label' => 'Studio Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Day');
  t('Request Duration');
  t('Studio Request 1');
  t('Studio Request 2');
  t('Studio Timeslot');
  t('Studio Type');

  return $field_instances;
}
