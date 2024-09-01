
Textile markup filter
======================

The Textile module allows you to enter content using Textile, a simple, plain
text syntax that is filtered into valid XHTML. The project Wiki page provides
syntax descriptions and examples. ??If you are using the title module, you will
need to ensure that Textile comes before the title module on the filter ordering
page.??

Textile can be enabled on a per-input-format basis.  There is an
option on the configuration page of each input format for indicating
whether or not Textile processing should only occur on text surrounded
by [textile] and (optional) [/textile] tags.  If an input format is
designed or required to use Textile, this option can be disabled, and
all input will be filtered.


Requirements
------------

This module requires that the Textile class libraries be installed in the 
include/ directory, as explained in the INSTALL.txt file. A recent version 
is included, but updated versions are available as described in INSTALL.txt.

Installation
------------

- Install this module using the official Backdrop CMS instructions at
  https://docs.backdropcms.org/documentation/extend-with-modules.

- Visit the configuration page under 'Administration > Configuration > Content 
  authoring > Text editors and formats > Add text format' and create a new text 
  format with the Textile filter enabled. You may want to disable any text
  editors for this text format, and have the Textile filter be either the only
  filter enabled or be first on the list.

- To configure the filter, press the "Configure" button. To limit Textile 
  filtering to the text between the tags \[textile] and \[/textile], check the
  box in the configure dialog. Otherwise, Textile will filter all the text
  in the submitted text field.


Documentation <!-- Do not include if you have not created a wiki page. -->
-------------

Additional documentation is located in [the Wiki](https://github.com/backdrop-contrib/foo-project/wiki/Documentation).

Issues 
------

Bugs and feature requests should be reported in [the Issue Queue](https://github.com/backdrop-contrib/foo-project/issues).

Current Maintainers 
-------------------

- [Steven Norton](https://github.com/sjnorton-aa).

- Additional maintainers would be welcome.

Credits 
-------

- Ported to Backdrop CMS by [Steven Norton](https://github.com/sjnorton-aa).
- Drupal history: Brad Choate developed an advanced implementation of Textile in
Perl, Textile.pm, which includes extra features beyond those of Dean Allen’s
Textile 2 implementation. This module was originally designed by Jim Riggs using
TextilePHP, Jim's PHP port of Brad’s Textile.pm Perl module and Movable Type
plugin.
- From original "credits.txt":
  - Written by Jim Riggs (drupal at jimandlissa dot com)
  - Textile.pm written by Brad Choate (brad at bradchoate dot com)
  - TextilePHP ported by Jim Riggs (textile @ jimandlissa dot com)

- The Textile class library was originally written by Dean Allen. It was refactored into a class framework by Carlo Zottmann. The library has been maintained on GitHub by Alex Shiels, Stef Dawson, Netcarver, Jeff Soo, Robert Wetzlmayr, and Jukka Svahn.


License 
-------

This project is GPL v2 software.
You can read the full GNU General Public License at: https://www.gnu.org/licenses/old-licenses/gpl-2.0.html

The Textile class library (Parser.php) is licensed under the BSD 3-clause
license (as described in the bundled LICENSE.txt).
