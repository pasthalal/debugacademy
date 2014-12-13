<?php
/**
 * @file
 * theme1_footer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function theme1_footer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function theme1_footer_node_info() {
  $items = array(
    'calendar_event' => array(
      'name' => t('Calendar Event'),
      'base' => 'node_content',
      'description' => t('A Calendar event, allows display of calendar events'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'class' => array(
      'name' => t('Class'),
      'base' => 'node_content',
      'description' => t('A Class, og group collection of users, courses, and a teacher'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => t('A <em>course</em> entity. This is the fundamental building bloc for Opigno. It can contain students, teachers, quizzes, files and many other ressources.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'notification' => array(
      'name' => t('Notification'),
      'base' => 'node_content',
      'description' => t('A Notification, allows teachers to notify, by calendar and/or email students'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tft_file' => array(
      'name' => t('File'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
