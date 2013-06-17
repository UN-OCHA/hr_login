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
  $strongarm->name = 'genpass_display';
  $strongarm->value = '0';
  $export['genpass_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'genpass_mode';
  $strongarm->value = '2';
  $export['genpass_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'persona_block_switch_account';
  $strongarm->value = FALSE;
  $export['persona_block_switch_account'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'persona_button_style';
  $strongarm->value = 'persona';
  $export['persona_button_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'persona_email_usernames';
  $strongarm->value = 1;
  $export['persona_email_usernames'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'persona_new_account_edit';
  $strongarm->value = 1;
  $export['persona_new_account_edit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'persona_takeover';
  $strongarm->value = 1;
  $export['persona_takeover'] = $strongarm;

  return $export;
}
