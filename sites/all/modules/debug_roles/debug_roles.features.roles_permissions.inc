<?php
/**
 * @file
 * debug_roles.features.roles_permissions.inc
 */

/**
 * Implements hook_default_roles_permissions().
 */
function debug_roles_default_roles_permissions() {
  $roles = array();

  // Exported role: client
  $roles['client'] = array(
    'name' => 'client',
    'weight' => 8,
    'permissions' => array(
      'access content' => TRUE,
    ),
  );

  // Exported role: student
  $roles['student'] = array(
    'name' => 'student',
    'weight' => 6,
    'permissions' => array(
      'access comments' => TRUE,
      'access content' => TRUE,
      'edit own comments' => TRUE,
      'post comments' => TRUE,
      'search content' => TRUE,
      'subscribe to newsletters' => TRUE,
      'use advanced search' => TRUE,
      'view own unpublished content' => TRUE,
    ),
  );

  // Exported role: teacher
  $roles['teacher'] = array(
    'name' => 'teacher',
    'weight' => 7,
    'permissions' => array(
      'access class results' => TRUE,
      'access comments' => TRUE,
      'access content' => TRUE,
      'access student results' => TRUE,
      'access teacher results' => TRUE,
      'administer advanced forum' => TRUE,
      'delete privatemsg' => TRUE,
      'edit own comments' => TRUE,
      'post comments' => TRUE,
      'read privatemsg' => TRUE,
      'search content' => TRUE,
      'use advanced search' => TRUE,
      'view forum statistics' => TRUE,
      'view last edited notice' => TRUE,
      'view own unpublished content' => TRUE,
      'write privatemsg' => TRUE,
    ),
  );

  return $roles;
}
