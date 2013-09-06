<?php


/*function intrepidnetwork_form_alter(&$form, &$form_state, $form_id) {
  if (!empty($form['actions']) && $form['actions']['submit']) {
    $form['actions']['submit']['#attributes'] = array('class' => array('btn-large'));
  }
}*/

function intrepidnetwork_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'webform_client_form_65') {
    $form['#attributes']['class'][] = 'row-fluid';
  }
	if (!empty($form['actions']) && $form['actions']['submit']) {
    $form['actions']['submit']['#attributes'] = array('class' => array('btn-large btn-inverse'));
  }
}