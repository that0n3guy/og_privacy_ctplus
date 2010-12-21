<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function og_privacy_ctplus_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "spaces" && $api == "spaces") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}
