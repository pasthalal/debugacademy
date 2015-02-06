<?php
/**
 * @file
 * debug_a_application.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function debug_a_application_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-application-field_additional_time'
  $field_instances['entityform-application-field_additional_time'] = array(
    'bundle' => 'application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'How much additional time are you willing to spend outside of class?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_additional_time',
    'label' => 'Additional Time',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'entityform-application-field_background'
  $field_instances['entityform-application-field_background'] = array(
    'bundle' => 'application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List any technical/programming background you have.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_background',
    'label' => 'Background',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-application-field_class_time'
  $field_instances['entityform-application-field_class_time'] = array(
    'bundle' => 'application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Check all of the times that you could be free to attend class',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_class_time',
    'label' => 'Class Times',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'entityform-application-field_email'
  $field_instances['entityform-application-field_email'] = array(
    'bundle' => 'application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-application-field_expectation'
  $field_instances['entityform-application-field_expectation'] = array(
    'bundle' => 'application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What are you expecting/hoping to learn from this class?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_expectation',
    'label' => 'Expectation ',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-application-field_interest'
  $field_instances['entityform-application-field_interest'] = array(
    'bundle' => 'application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_interest',
    'label' => 'Interest',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-application-field_job_title'
  $field_instances['entityform-application-field_job_title'] = array(
    'bundle' => 'application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Current job title',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_job_title',
    'label' => 'Job Title ',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-application-field_name'
  $field_instances['entityform-application-field_name'] = array(
    'bundle' => 'application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'First Name Last Name ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_name',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-application-field_operating'
  $field_instances['entityform-application-field_operating'] = array(
    'bundle' => 'application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Which operating system does the laptop you will bring to class use?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_operating',
    'label' => 'Operating',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-application-field_reason'
  $field_instances['entityform-application-field_reason'] = array(
    'bundle' => 'application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Why do you want to take this class?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_reason',
    'label' => 'Reason',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-application-field_salary'
  $field_instances['entityform-application-field_salary'] = array(
    'bundle' => 'application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '* Current salary will remain confidential',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_salary',
    'label' => 'Current Salary',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-application-field_status'
  $field_instances['entityform-application-field_status'] = array(
    'bundle' => 'application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'STAFF ONLY',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_status',
    'label' => 'Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('* Current salary will remain confidential');
  t('Additional Time');
  t('Background');
  t('Check all of the times that you could be free to attend class');
  t('Class Times');
  t('Current Salary');
  t('Current job title');
  t('Email');
  t('Expectation ');
  t('First Name Last Name ');
  t('How much additional time are you willing to spend outside of class?');
  t('Interest');
  t('Job Title ');
  t('List any technical/programming background you have.');
  t('Name');
  t('Operating');
  t('Reason');
  t('STAFF ONLY');
  t('Status');
  t('What are you expecting/hoping to learn from this class?');
  t('Which operating system does the laptop you will bring to class use?');
  t('Why do you want to take this class?');

  return $field_instances;
}
