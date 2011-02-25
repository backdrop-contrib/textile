<?php

/**
 * DrupalTextile is a subclass of MTLikeTextile that properly handles
 * Textile footnote URL fragments in a Drupal context.
 *
 * @copyright Copyright (c) 2003-2006 Jim Riggs.  All rights reserved.
 * @author Jim Riggs <drupal at jimandlissa dot com>
 */

require_once(dirname(__FILE__) . '/textilephp/Textile.php');

/**
 * DrupalTextile is a subclass of MTLikeTextile that properly handles
 * Textile footnote URL fragments in a Drupal context.
 */
class DrupalTextile extends MTLikeTextile {
  /**
   * Creates a new DrupalTextile object using the provided options.
   *
   * @param $options
   *   The <code>array</code> specifying the options for this object.
   */
  function DrupalTextile($options = array()) {
    parent::MTLikeTextile($options);
  }

  /**
   * Formats the provided URL, properly handling URL fragments in a
   * Drupal context.
   *
   * @param $args
   *    The <code>array</code> specifying the URL with key "url".
   *
   * @return
   *    A <code>string</code> containing the formatted URL.
   */
  function format_url($args) {
    if (preg_match('<^#>', $args['url'])) {
      $args['url'] = $_GET['q'] . $args['url'];
    }

    $args['url'] = ($args['url'] ? url($args['url']) : '');

    return parent::format_url($args);
  }
}

?>