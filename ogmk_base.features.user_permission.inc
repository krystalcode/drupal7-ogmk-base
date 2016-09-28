<?php
/**
 * @file
 * ogmk_base.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ogmk_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'have the administrator role'.
  $permissions['have the administrator role'] = array(
    'name' => 'have the administrator role',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ogmk_base',
  );

  // Exported permission: 'have the anonymous user role'.
  $permissions['have the anonymous user role'] = array(
    'name' => 'have the anonymous user role',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'ogmk_base',
  );

  // Exported permission: 'have the authenticated user role'.
  $permissions['have the authenticated user role'] = array(
    'name' => 'have the authenticated user role',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ogmk_base',
  );

  // Exported permission: 'have the merchant role'.
  $permissions['have the merchant role'] = array(
    'name' => 'have the merchant role',
    'roles' => array(
      'merchant' => 'merchant',
    ),
    'module' => 'ogmk_base',
  );

  // Exported permission: 'use text format ogmk_basic_html'.
  $permissions['use text format ogmk_basic_html'] = array(
    'name' => 'use text format ogmk_basic_html',
    'roles' => array(
      'administrator' => 'administrator',
      'merchant' => 'merchant',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format ogmk_plain_html'.
  $permissions['use text format ogmk_plain_html'] = array(
    'name' => 'use text format ogmk_plain_html',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
