<?php
/**
 * @file
 * ogmk_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ogmk_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function ogmk_base_paragraphs_info() {
  $items = array(
    'basic' => array(
      'name' => 'Basic',
      'bundle' => 'basic',
      'locked' => '1',
    ),
    'block' => array(
      'name' => 'Block',
      'bundle' => 'block',
      'locked' => '1',
    ),
    'node_list' => array(
      'name' => 'Content List',
      'bundle' => 'node_list',
      'locked' => '1',
    ),
  );
  return $items;
}
