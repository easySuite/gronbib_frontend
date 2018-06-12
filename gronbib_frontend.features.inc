<?php
/**
 * @file
 * gronbib_frontend.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gronbib_frontend_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 *
 * TRY TO NOT REMOVE 'path' AND 'template path' keys.
 */
function gronbib_frontend_views_api($module = NULL, $api = NULL) {
  return array(
    'api' => '3.0',
    'path' => drupal_get_path('module', 'gronbib_frontend'),
    'template path' => drupal_get_path('module', 'gronbib_frontend') . '/templates',
  );
}
