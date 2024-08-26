
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


Requirements <!-- Do not include this section if there are no requirements. -->
------------

This module requires that the Textile class library be installed in the include/ directory, as explained in the INSTALL.txt file. A recent version is included, but updated versions are available as described in INSTALL.txt.

Installation <!-- This section is required. -->
------------

- Install this module using the official Backdrop CMS instructions at
  https://docs.backdropcms.org/documentation/extend-with-modules.

- Visit the configuration page under Administration > Configuration > Category >
  Foo (admin/config/category/foo) and enter the required information.

- Any additional steps.


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


License 
-------

This project is GPL v2 software.
You can read the full GNU General Public License at: https://www.gnu.org/licenses/old-licenses/gpl-2.0.html

The Textile class library (Parser.php) is licensed under the BSD 3-clause
license (as described in the bundled LICENSE.txt).
