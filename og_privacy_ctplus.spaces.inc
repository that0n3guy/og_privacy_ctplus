<?php

/**
 * Implementation of hook_spaces_presets().
 */
function og_privacy_ctplus_spaces_presets() {
  $export = array();
  $spaces_presets = new stdClass;
  $spaces_presets->disabled = FALSE; /* Edit this to true to make a default spaces_presets disabled initially */
  $spaces_presets->api_version = 3;
  $spaces_presets->name = 'og_privacy_ctplus_private';
  $spaces_presets->title = 'CTPlus - Private group';
  $spaces_presets->description = '';
  $spaces_presets->space_type = 'og';
  $spaces_presets->value = array(
    'variable' => array(
      'spaces_features' => array(
        'atrium_blog' => '0',
        'atrium_book' => '1',
        'atrium_calendar' => '0',
        'atrium_members' => '1',
        'atrium_shoutbox' => '0',
        'ct_plus' => '1',
        'spaces_dashboard' => '1',
      ),
      'site_frontpage' => 'dashboard',
      'site_frontpage_path' => 'dashboard',
      'spaces_og_selective' => '3',
      'spaces_og_register' => 0,
      'spaces_og_directory' => 0,
      'spaces_og_private' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('CTPlus - Private group');

  $export['og_privacy_ctplus_private'] = $spaces_presets;
  return $export;
}
