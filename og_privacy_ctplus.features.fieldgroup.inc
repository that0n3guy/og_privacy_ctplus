<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function og_privacy_ctplus_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_ct_plus_access_settings
  $groups['ct_plus_project-group_ct_plus_access_settings'] = array(
    'group_type' => 'standard',
    'type_name' => 'ct_plus_project',
    'group_name' => 'group_ct_plus_access_settings',
    'label' => 'Additional Access Settings',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '42',
    'fields' => array(
      '0' => 'field_ct_plus_private',
      '1' => 'field_ct_plus_projectmanager',
      '2' => 'field_ct_plus_additionalusers',
    ),
  );

  // Exported group: group_ct_plus_access_settings
  $groups['ct_plus_task-group_ct_plus_access_settings'] = array(
    'group_type' => 'standard',
    'type_name' => 'ct_plus_task',
    'group_name' => 'group_ct_plus_access_settings',
    'label' => 'Additional Access Settings',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '1',
    'fields' => array(
      '0' => 'field_ct_plus_private',
      '1' => 'field_ct_plus_additionalusers',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Access Settings');

  return $groups;
}
