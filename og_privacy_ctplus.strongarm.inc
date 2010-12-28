<?php

/**
 * Implementation of hook_strongarm().
 */
function og_privacy_ctplus_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_ct_plus_project_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '-5',
      'has_required' => TRUE,
      'title' => 'Title',
    ),
    'body_field' => array(
      'region' => 'main',
      'weight' => '0.008',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Menu settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Revision information',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Comment settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Publishing options',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Authoring information',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'buttons' => array(
      'region' => 'main',
      'weight' => '100',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'notifications' => array(
      'region' => 'main',
      'weight' => '0.015',
      'has_required' => FALSE,
      'title' => 'Notifications',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'book' => array(
      'region' => 'main',
      'weight' => '10',
      'has_required' => FALSE,
      'title' => 'Book outline',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'field_files' => array(
      'region' => 'main',
      'weight' => '32',
      'has_required' => FALSE,
      'title' => 'Files',
      'hidden' => 0,
    ),
    'field_ct_plus_status' => array(
      'region' => 'main',
      'weight' => '34',
      'has_required' => TRUE,
      'title' => 'Status',
    ),
    'og_nodeapi' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Groups',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'og_privacy_ctplus' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'OG Privacy CTPlus "privacy" settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
  );

  $export['nodeformscols_field_placements_ct_plus_project_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_ct_plus_task_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Title',
    ),
    'body_field' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Menu settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Revision information',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Comment settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Publishing options',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Authoring information',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'buttons' => array(
      'region' => 'main',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'notifications' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Notifications',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'book' => array(
      'region' => 'main',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Book outline',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'og_nodeapi' => array(
      'region' => 'main',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Groups',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'group_ct_plus_properties' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => TRUE,
      'title' => 'Required properties',
      'collapsed' => 0,
    ),
    'group_ct_plus_properties_big' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Optional properties',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'group_files' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Files',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'og_privacy_ctplus' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'OG Privacy CTPlus "privacy" settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
  );

  $export['nodeformscols_field_placements_ct_plus_task_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_privacy_ctplus_nodes_ct_plus_project';
  $strongarm->value = 1;

  $export['og_privacy_ctplus_nodes_ct_plus_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_privacy_ctplus_nodes_ct_plus_task';
  $strongarm->value = 1;

  $export['og_privacy_ctplus_nodes_ct_plus_task'] = $strongarm;
  return $export;
}
