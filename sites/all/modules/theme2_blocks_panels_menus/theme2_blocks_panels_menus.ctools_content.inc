<?php
/**
 * @file
 * theme2_blocks_panels_menus.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function theme2_blocks_panels_menus_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'class_over';
  $content->admin_title = 'Class Over';
  $content->admin_description = 'Information on what happens at course conclusion';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'What happens when the class is over?',
    'body' => '<h2 class="tab-header">What happens when the class is over?</h2><p>This course will take approximately 14 weeks. After the course, we will not teach another class for 3 weeks -- your teacher\'s job in that time is to help you get paid work, and be available for questions to make your career transition smoother. This is appealing to employers - they will hire you, and you have your network as a resource for advanced questions.</p><a href="http://www.w3schools.com/" id="class-over" target="_blank">SEE MORE DETAIL<img src="/sites/all/themes/debuga_theme2/images/more-detail.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['class_over'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'copyright_info';
  $content->admin_title = 'Copyright info';
  $content->admin_description = 'Copyright information';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>©Copyright 2014. All Rights Reserved.</p>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['copyright_info'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'employer_info';
  $content->admin_title = 'employer_info';
  $content->admin_description = 'Employer information';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'EMPLOYERS',
    'body' => '<p class="left-padding right-padding">Only teach highly in-demand technologies.<br>Re-assess curriculum regularly.</p><p class="left-padding right-padding">Keep class sizes very small: 5-10 students per class.</p><p class="left-padding right-padding">Curriculum is customized mid-way per-student.</p><a href="www.cnn.com" id="hire-class">Hire our Class<img src="/sites/all/themes/debuga_theme2/images/hire-class-button.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['employer_info'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'get_in_touch';
  $content->admin_title = 'Get In Touch';
  $content->admin_description = 'Address, Contact Info, and Hours';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'GET IN TOUCH',
    'body' => '<p><img src="/sites/all/themes/debuga_theme2/images/location-icon.PNG" style="line-height: 1.5; float: left;">&nbsp;<span style="line-height: 1.5;">Address: 13524 Gray Bill Court, Clifton</span></p><p><img alt="" src="/sites/all/themes/debuga_theme2/images/phone-icon.png" style="float: left;">&nbsp;Phone: 703-111-1111</p><p><img alt="" src="/sites/all/themes/debuga_theme2/images/skype-icon.png" style="float: left;">&nbsp;Skype: debugsociety</p><p><img alt="" src="/sites/all/themes/debuga_theme2/images/e-mail-icon.png" style="float: left; margin-top: 3px; margin-bottom: 3px;">&nbsp;E-mail: debugsociety@debug.com</p><p><img alt="" src="/sites/all/themes/debuga_theme2/images/clock-icon.png" style="float: left;">&nbsp;Weekend: from 9 am to 6 pm</p>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['get_in_touch'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'hire_class';
  $content->admin_title = 'Hire Class';
  $content->admin_description = 'Dialogue bubble - hire our class';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'Hire our next class to work on YOUR project',
    'body' => '<p>Client projects are led by the teacher, a full-time senior developer.</p>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['hire_class'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'how_different';
  $content->admin_title = 'How Different';
  $content->admin_description = 'How Debug Society is Different';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'HOW WE\'RE DIFFERENT',
    'body' => '<hr class="hr-light" id="diff-hr"><p class="left">Debug Society is the best in the world wooot wooot forever and ever. Debug Society is the best in the world wooot wooot forever and ever. Debug Society is the best in the world wooot wooot forever and ever.</p><ul><li>We\'re the best ever seriously we are we are we are we are</li><li>We\'re the best all the time</li><li>We\'re the best yesterday we are</li><li>We\'re the best today</li><li>We\'re the best tomorrow</li><li>We\'re the best now</li></ul>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['how_different'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'join_the_movement';
  $content->admin_title = 'Join the Movement';
  $content->admin_description = 'Join the movement section with apply now link';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'JOIN THE MOVEMENT',
    'body' => '<hr><a href="https://debugs.slack.com" id="apply-today">APPLY TODAY<img src="/sites/all/themes/debuga_theme2/images/apply-today-button.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['join_the_movement'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'next_location';
  $content->admin_title = 'Next Location';
  $content->admin_description = 'Where the next class is located';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'Where is the next class located?',
    'body' => '<h2 class="tab-header">Where is the next class located?</h2><p>The class will be held in Fairfax, VA - near Washington, D.C. Graduates will be well placed to score a great job with the active D.C. Drupal community.</p><a href="http://www.w3schools.com/" id="next-location" target="_blank">SEE MORE DETAIL<img src="/sites/all/themes/debuga_theme2/images/more-detail.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['next_location'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'payment_info';
  $content->admin_title = 'Payment Info';
  $content->admin_description = 'Tab with payment information';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'Payment Information',
    'body' => '<h2 class="tab-header">Payment Information</h2><p>Here is some payment information</p><a href="http://www.w3schools.com/" id="payment-info" target="_blank">SEE MORE DETAIL<img src="/sites/all/themes/debuga_theme2/images/more-detail.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['payment_info'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'previous_graduate_statistics';
  $content->admin_title = 'Previous Graduate Statistics';
  $content->admin_description = 'Previous Graduate Statistics';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'PREVIOUS GRADUATE STATISTICS',
    'body' => '<hr><a href="https://debugs.slack.com" id="see-stats-link" target="_blank"><img src="/sites/all/themes/debuga_theme2/images/stats-button-bg.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['previous_graduate_statistics'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'student_info';
  $content->admin_title = 'Student Info';
  $content->admin_description = 'Information for Students';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'STUDENTS',
    'body' => '<p class="left-padding right-padding">Only teach highly in-demand technologies.<br>Re-assess curriculum regularly.</p><p class="left-padding right-padding">Keep class sizes very small: 5-10 students per class.</p><p class="left-padding right-padding">Curriculum is customized mid-way per-student.</p><a href="www.cnn.com" id="apply-now">Apply Now<img src="/sites/all/themes/debuga_theme2/images/apply-now-button.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['student_info'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'teaching_next';
  $content->admin_title = 'Teaching Next';
  $content->admin_description = 'Information on what Debug Society will be teaching next';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'What are we teaching next?',
    'body' => '<h2 class="tab-header">What are we teaching next?</h2><p>This semester we will be teaching Drupal 7 development. Students will learn how to be a valuable member of an enterprise-level Drupal development team. Your teacher currently works on some of the largest Drupal websites in the world, and you will develop the same way his team does. You will be a great asset to any Drupal development team!</p><a href="http://www.w3schools.com/" id="teaching-next" target="_blank">SEE MORE DETAIL<img src="/sites/all/themes/debuga_theme2/images/more-detail.png"></a>',
    'format' => 'html',
    'substitute' => 1,
  );
  $export['teaching_next'] = $content;

  return $export;
}
