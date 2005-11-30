<?php
// $Id$

/**
 * DrupalTextile is a subclass of MTLikeTextile that properly handles
 * Textile footnote URL fragments in a Drupal context.
 *
 * @version $Id$
 * @copyright Copyright (c) 2003-2005 Jim Riggs.  All rights reserved.
 * @author Jim Riggs <drupal at jimandlissa dot com>
 */

/* This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA
 */

/* Code notes:
 *   - Local, non-boolean variables start with "the" as in $the_output
 *     and $the_version.  Local boolean variables start with words such
 *     as "is" or "has" to indicate their meaning as in $is_installed
 *     and $has_title.  Short-lived loop variables use standard, short
 *     names as in $i and $x.
 *
 *   - Function parameters are prefixed with "in", "out", or "io" to
 *     indicate their use as input, output, or input-output,
 *     respectively, as in $in_title.
 *
 *   - All functions are prefixed with "textile_" and words are
 *     separated with underscores.
 *
 *   - I make extensive use of heredoc syntax and multiline strings.
 *     It looks much nicer than dozens of "$var .= ..." lines and is
 *     easier to read and format -- especially the HTML tags.  It helps
 *     in outputting HTML pages that are well-formatted and readable.
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
   * @param $in_options
   *   The <code>array</code> specifying the options for this object.
   */
  function DrupalTextile($in_options = array()) {
    parent::MTLikeTextile($in_options);
  } // function DrupalTextile

  /**
   * Processes the provided Textile-formatted text, properly handling
   * URL fragments in a Drupal context.
   *
   * @param $in_string
   *   The <code>string</code> specifying the text to be processed.
   *
   * @return
   *   A <code>string</code> containing the processed text.
   */
  function process($in_string) {
    return preg_replace('{(<a href=")(#[^"]*")}', '$1' . request_uri() . '$2', parent::process($in_string));
  } // function process
} // class DrupalTextile

?>
