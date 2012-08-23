<?php
/**
 * @file
 * hr_login.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_login_user_default_permissions() {
  $permissions = array();

  // Exported permission: log in using browserid.
  $permissions['log in using browserid'] = array(
    'name' => 'log in using browserid',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'browserid',
  );

  return $permissions;
}
