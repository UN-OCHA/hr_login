<?php
/**
 * @file
 * hr_login.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hr_login_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'browserid_button';
  $strongarm->value = 'red';
  $export['browserid_button'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'genpass_mode';
  $strongarm->value = '2';
  $export['genpass_mode'] = $strongarm;

  return $export;
}
