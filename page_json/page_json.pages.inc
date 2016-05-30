<?php

/**
 * @file, inc page
 * Get nid, site API key in site page and returned a json object
 * Author: Debraj
 */

/**  
 * @params $key, site key id
 * @params  $nid, the node id
 * @return: JSON object. 
 */
function page_json_create_json($key, $nid) {
 $output = '';
  if (is_numeric($nid)){
   $node = node_load($nid);
   $output =  drupal_json_encode($node);
  }
  return $output;
}