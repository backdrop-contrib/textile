textile.module
README
$Id$

The Textile module allows you to enter content using Textile, a
simple, plain text syntax that is filtered into valid XHTML. The
filter tips found on the filter/tips page of your Drupal site provides
syntax descriptions and examples. If you are using the title module,
you will need to ensure that Textile comes before the title module on
the filter ordering page.

Textile can be enabled on a per-input-format basis.  There is an
option on the configuration page of each input format for indicating
whether or not Textile processing should only occur on text surrounded
by [textile] and (optional) [/textile] tags.  If an input format is
designed or required to use Textile, this option can be disabled, and
all input will be filtered.

More information about Textile can be found at the Textile home page
<http://textism.com/tools/textile/>.

Files
  - textile.module
      the actual module (PHP source code)

  - textilephp (directory)
      a PHP port of Brad Choate's (<brad at bradchoate dot com>)
      Textile.pm (<http://bradchoate.com/mt-plugins/textile>) Perl
      module ported by Jim Riggs (PHP source code); this file is
      available separately under the GNU GPL from
      <http://jimandlissa.com/project/textilephp>

  - smartypants-php (directory)
      a PHP port of John Gruber's (<http://daringfireball.net/>) Perl
      SmartyPants.pl Movable Type plugin ported by Matthew McGlynn
      (PHP source code); this file is available separately under a
      custom redistribution license from
      <http://monauraljerk.org/smartypants-php/>

  - README (this file)
      general module information

  - INSTALL
      installation/configuration instructions

  - CREDITS
      information on those responsible for this module

  - TODO
      feature requests and modification suggestions

  - CHANGELOG
      change/release history for this module

  - LICENSE
      the license (GNU General Public License) covering the usage,
      modification, and distribution of this software and its
      accompanying files except for SmartyPants-PHP.inc which is
      covered under a custom redistribution license
