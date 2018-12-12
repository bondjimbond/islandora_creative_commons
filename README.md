# Islandora Creative Commons Badge

## Introduction

Islandora CC Badge provides block containing a Creative Commons license image and a link to the CC license details.
It reads the CC License URI from a MODS element in your object's metadata, and queries the Creative Commons API to return the badge.

Example badge:

![Example badge](https://licensebuttons.net/l/by-nc-nd/4.0/88x31.png)

The badge will only display on objects with a MODS datastream and a Creative Commons License URI in some defined element.

## Requirements

This module requires the following modules/libraries:

* [Islandora](https://github.com/islandora/islandora)
* [Islandora Solr](https://github.com/islandora/islandora_solr)
* [Islandora Badges](../../)

## Installation

Install as usual, see [this](https://drupal.org/documentation/install/modules-themes/modules-7) for further information.

## Configuration

Configuration path is admin/islandora/tools/badges/creativecommons (Administration > Islandora > Islandora Utility Modules > Islandora Badges Configuration > CC Badge).

Solr field for Creative Commons license URI: Defaults to `dc.rights`. Multivalued field recommended if working with other accessCondition fields.

## Metadata

You can choose any element for your CreativeCommons URI, so long as it creates a Solr field. The default is dc.rights.

The value of the field must be a URI to the CreativeCommons license. Example from a MODS datastream:

`<accessCondition type="use and reproduction" displayLabel="Creative Commons license">http://creativecommons.org/licenses/by-nc/4.0/</accessCondition>`

## Troubleshooting/Issues

Having problems or solved a problem? Check out the Islandora google groups for a solution.

* [Islandora Group](https://groups.google.com/forum/?hl=en&fromgroups#!forum/islandora)
* [Islandora Dev Group](https://groups.google.com/forum/?hl=en&fromgroups#!forum/islandora-dev)

## Maintainers/Sponsors

Current maintainers:

* [Brandon Weigel](https://github.com/bondjimbond)

## Development

If you would like to contribute to this module, please check out [CONTRIBUTING.md](CONTRIBUTING.md). In addition, we have helpful [Documentation for Developers](https://github.com/Islandora/islandora/wiki#wiki-documentation-for-developers) info, as well as our [Developers](http://islandora.ca/developers) section on the [Islandora.ca](http://islandora.ca) site.

## License

[GPLv3](http://www.gnu.org/licenses/gpl-3.0.txt)
