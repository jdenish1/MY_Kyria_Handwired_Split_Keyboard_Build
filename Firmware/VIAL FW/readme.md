# Product Name

After finally getting QMK to compile with the DEFAULT keymap, not my personal keymap, now Im trying to get Vial FW to work so I can easily edit keymap on the fly (without having to hold reset button on microcontroller and having to remove the keyboard case back cover) with the Vial Software. 

CURRENTLY IN PROGRESS....

![](header.png)

## Installation

Windows:

```sh
git clone https://github.com/jdenish1/vial-qmk

cd vial-qmk

make git-submodules
```
## Usage example

A few motivating and useful examples of how your product can be used. Spice this up with code blocks and potentially more screenshots.

_For more examples and usage, please refer to the [Wiki][wiki]._

## Development setup

Describe how to install all development dependencies and how to run an automated test-suite of some kind. Potentially do this for multiple platforms.

```sh

mkdir -p keyboards/handwired/jdenish1/kyria_handwired

open keyboards/handwired/jdenish1/kyria_handwired
```
copy over files to directory

```sh
code keyboards/handwired/jdenish1/kyria_handwired
```
opens vscode

.... to be cont...

## Release History

* 0.2.1
    * CHANGE: Update docs (module code remains unchanged)
* 0.2.0
    * CHANGE: Remove `setDefaultXYZ()`
    * ADD: Add `init()`
* 0.1.1
    * FIX: Crash when calling `baz()` (Thanks @GenerousContributorName!)
* 0.1.0
    * The first proper release
    * CHANGE: Rename `foo()` to `bar()`
* 0.0.1
    * Work in progress

## Meta

Jared Denish – [@Github](https://github.com/jdenish1) – [@Email](jareddenish@gmail.com)

## Contributing

1. Fork it (<https://github.com/yourname/yourproject/fork>)
2. Create your feature branch (`git checkout -b feature/fooBar`)
3. Commit your changes (`git commit -am 'Add some fooBar'`)
4. Push to the branch (`git push origin feature/fooBar`)
5. Create a new Pull Request

<!-- Markdown link & img dfn's -->
[npm-image]: https://img.shields.io/npm/v/datadog-metrics.svg?style=flat-square
[npm-url]: https://npmjs.org/package/datadog-metrics
[npm-downloads]: https://img.shields.io/npm/dm/datadog-metrics.svg?style=flat-square
[travis-image]: https://img.shields.io/travis/dbader/node-datadog-metrics/master.svg?style=flat-square
[travis-url]: https://travis-ci.org/dbader/node-datadog-metrics
[wiki]: https://github.com/yourname/yourproject/wiki


Peace

-JRad
