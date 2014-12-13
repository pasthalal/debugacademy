<?php
/**
 * @file
 * theme2_blocks_panels_menus.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function theme2_blocks_panels_menus_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Information on what happens at course conclusion';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'class_over';
  $fe_block_boxes->body = '<p>This course will take approximately 14 weeks. After the course, we will not teach another class for 3 weeks -- your teacher\'s job in that time is to help you get paid work, and be available for questions to make your career transition smoother. This is appealing to employers - they will hire you, and you have your network as a resource for advanced questions.</p>';

  $export['class_over'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Copyright info';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'copyright_info';
  $fe_block_boxes->body = '<p><span style="line-height: 1.5;">©</span><span style="line-height: 1.5;">Copyright 2014. All Rights Reserved.</span></p>';

  $export['copyright_info'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Employer information for Theme 2 Home';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'employers';
  $fe_block_boxes->body = '<p class="left-padding right-padding">Only teach highly in-demand technologies.<br>Reassess curriculum regularly.</p><p class="left-padding right-padding">Keep class sizes very small: 5-10 students per class.</p><p class="left-padding right-padding">Curriculum is customized mid-way per-student.</p><a href="www.cnn.com" id="Hire-Our-Class"><h2>HIRE OUR <strong>CLASS</strong></h2></a>';

  $export['employers'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Address, Contact Info, and Hours';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'get_in_touch';
  $fe_block_boxes->body = '<p><img src="/sites/all/themes/debuga_theme2/images/location-icon.PNG" style="line-height: 1.5; float: left;">&nbsp;<span style="line-height: 1.5;">Address: 13524 Gray Bill Court, Clifton</span></p><p><img alt="" src="/sites/all/themes/debuga_theme2/images/phone-icon.png" style="float: left;">&nbsp;Phone: 703-111-1111</p><p><img alt="" src="/sites/all/themes/debuga_theme2/images/skype-icon.png" style="float: left;">&nbsp;Skype: debugsociety</p><p><img alt="" src="/sites/all/themes/debuga_theme2/images/e-mail-icon.png" style="float: left; margin-top: 3px; margin-bottom: 3px;">&nbsp;E-mail: debugsociety@debug.com</p><p><img alt="" src="/sites/all/themes/debuga_theme2/images/clock-icon.png" style="float: left;">&nbsp;Weekend: from 9 am to 6 pm</p>';

  $export['get_in_touch'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Previous Graduate Statistics';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'grad_stats';
  $fe_block_boxes->body = '<hr><a href="https://debugs.slack.com" id="see-stats-link" target="_blank"><img src="/sites/all/themes/debuga_theme2/images/stats-button-bg.PNG"></a>';

  $export['grad_stats'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Hire block';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'hire_our_class';
  $fe_block_boxes->body = '<p>Client projects are led by the teacher, a full-time senior developer.</p>';

  $export['hire_our_class'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'How Debug Society is different';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'how_different';
  $fe_block_boxes->body = '<hr class="hr-light" id="diff-hr"><p class="left">Debug Society is the best in the world wooot wooot forever and ever.&nbsp;<span style="font-size: 15.5555562973022px; line-height: 26.6666679382324px;">Debug Society is the best in the world wooot wooot forever and ever.&nbsp;</span><span style="font-size: 15.5555562973022px; line-height: 26.6666679382324px;">Debug Society is the best in the world wooot wooot forever and ever.&nbsp;</span><span style="font-size: 15.5555562973022px; line-height: 26.6666679382324px;">Debug Society is the best in the world wooot wooot forever and ever.</span></p><ul><li>We\'re the best ever seriously we are we are we are we are</li><li>We\'re the best all the time</li><li>We\'re the best yesterday we are</li><li>We\'re the best today</li><li>We\'re the best tomorrow</li><li>We\'re the best now</li></ul>';

  $export['how_different'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Location information for classes';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'location_info';
  $fe_block_boxes->body = '<p>Location info for debug society classes</p>';

  $export['location_info'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Payment information for classes';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'payment_info';
  $fe_block_boxes->body = '<p>Payment info</p>';

  $export['payment_info'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Information for students on Theme 2 home page';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'students';
  $fe_block_boxes->body = '<p class="left-padding right-padding">Only teach highly in-demand technologies.<br>Re-assess curriculum regularly.</p><p class="left-padding right-padding">Keep class sizes very small: 5-10 students per class.</p><p class="left-padding right-padding">Curriculum is customized mid-way per-student.</p><a href="www.cnn.com" id="Apply-Now"><h2>APPLY <strong>NOW</strong></h2></a>';

  $export['students'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Information on what Debug Society will be teaching next';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'teaching_next';
  $fe_block_boxes->body = '<h2 class="tab-header">What are we teaching next?</h2><p>This semester we will be teaching Drupal 7 development. Students will learn how to be a valuable member of an enterprise-level Drupal development team. Your teacher currently works on some of the largest Drupal websites in the world, and you will develop the same way his team does. You will be a great asset to any Drupal development team!</p><div class="inline-block-wrap"><a href="http://www.w3schools.com/" id="teaching-next" target="_blank"><h2 class="more-detail">SEE MORE <strong>DETAIL</strong></h2></a></div>';

  $export['teaching_next'] = $fe_block_boxes;

  return $export;
}
