<?php
/**
 * @file
 * email_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function email_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access mandrill activity'.
  $permissions['access mandrill activity'] = array(
    'name' => 'access mandrill activity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mandrill_activity',
  );

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer mandrill'.
  $permissions['administer mandrill'] = array(
    'name' => 'administer mandrill',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mandrill',
  );

  // Exported permission: 'administer mandrill activity'.
  $permissions['administer mandrill activity'] = array(
    'name' => 'administer mandrill activity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mandrill_activity',
  );

  // Exported permission: 'choose htmlmail_plaintext'.
  $permissions['choose htmlmail_plaintext'] = array(
    'name' => 'choose htmlmail_plaintext',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'htmlmail',
  );

  // Exported permission: 'configure mandrill templates'.
  $permissions['configure mandrill templates'] = array(
    'name' => 'configure mandrill templates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mandrill_template',
  );

  // Exported permission: 'create email content'.
  $permissions['create email content'] = array(
    'name' => 'create email content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any email content'.
  $permissions['delete any email content'] = array(
    'name' => 'delete any email content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own email content'.
  $permissions['delete own email content'] = array(
    'name' => 'delete own email content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any email content'.
  $permissions['edit any email content'] = array(
    'name' => 'edit any email content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit mimemail user settings'.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'edit own email content'.
  $permissions['edit own email content'] = array(
    'name' => 'edit own email content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'send arbitrary files'.
  $permissions['send arbitrary files'] = array(
    'name' => 'send arbitrary files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'view mandrill reports'.
  $permissions['view mandrill reports'] = array(
    'name' => 'view mandrill reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mandrill_reports',
  );

  return $permissions;
}
