<h1 align="center">Kyria_Handwired Split Keyboard</h1>

<div align="center">
<br />
<img src="https://github.com/jdenish1/MY_Kyria_Handwired_Split_Keyboard_Build/assets/96416029/91b6aab6-f79d-471f-91d8-8aa66da75762"

[![made with hearth by dec0dOS](https://img.shields.io/badge/made%20with%20%E2%99%A5%20by-dec0dOS-ff1414.svg?style=flat-square)](https://github.com/dec0dOS)

</div>

<details open="open">
<summary>Table of Contents</summary>

- [About](#about)
  - [Bill of Materials](#built-with)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Usage](#usage)
    - [Cookiecutter template](#cookiecutter-template)
    - [Manual setup](#manual-setup)
    - [Variables reference](#variables-reference)
- [Roadmap](#roadmap)
- [Contributing](#contributing)
- [Support](#support)
- [License](#license)
- [Acknowledgements](#acknowledgements)

</details>

---

## About

<table>
<tr>
<td>

This is my rendition of a handwired split keyboard I did based on the Kyria by Thomas Baard ---> https://blog.splitkb.com/introducing-the-kyria/

This is my first split KB attempt and have been wanting to build a split for a while now. Ive done two other keyboard builds prior. Not only did I get inspiration from the original creator Thomas Baard but also from another github member MoltenZaz linked here ---> https://github.com/MoltenZaz/Handwired-Kyria. I dont know these guys personally but I got inspiration from their builds.

Try out the Keyswitch spacing with Baards printout here ----> https://docs.splitkb.com/hc/en-us/articles/360010627159-Can-I-try-the-Kyria-before-I-buy?ref=blog.splitkb.com

I added 2 EC11 rotary encoders, one per side, for the bottom left key on left side and bottom right key of right side which added a bit of complexity to the firmware build.

I also added WS2812 RGB Underglow to each side and ditched the 3d printed bottom plate for a handmade clear acrylic bottom plate.

Anyways, just made this public in case it helps anyone else out, in the spirit of the open source movement....

</td>
</tr>
</table>

### BOM
| # | Part | Type | Qty | Cost |
|:-:|:-----------:|:------------------------------------------|:----:|:------:|
| 1a| Keyswitches | Glorious Panda Tactile Switches - Unlubed |  x25 | $24.99 |
| 1b| Keyswitches | Cherry Red Tactile Switches - Unlubed     |  x25 | $14.63 |
| 2 |   Diodes    | 1N4148 THT High Speed Switching Diodes    | x100 | $ 2.30 |
| 3 | Controllers | Waveshare RP2040-Zero Microcontrollers    | x2   | $ 4.08 |
| 4 | Encoders    | EC11 20Pos 5VDC 7 Pin 360* Encoder w knobs| x2   | $ 4.03 |
| 5 | Connectors  | XS6 Mini Aviation Plug and Socket - 4Pin  | x2   | $ 8.16 |
| 6 | Heat Inserts| M2x6mm Heat Set Inserts - x30 needed      | x50  | $ 4.68 |
| 7 | Screws      | M2x6mm Countersunk - Black - x30 needed   | x50  | $ 3.04 |
| 8 | Keycaps     | GMK Pharoah Black & Gold Full Set         | x1   | $24.99 |
| 9 | Keyboard Feet| Screw-In or Tape-On Your Choice          | x10  | $ 4.99 |
| 10| 3D Printed Case | Printed on my Ratrig V Core 3 - On Hand| 4 pc | $ 0.00 |
| 11| Wire        | I used Cat5e Solid Wire 26awg - On Hand   | x1   | $ 1.00 |
| 12| USB Cable Wire| 24/4 shielded cable - On Hand ($0.45/ft |1-5ft | $ 1.50 |


## Getting Started

### Prerequisites

Download [QMK_MSYS](https://github.com/qmk/qmk_distro_msys/releases/download/1.9.0/QMK_MSYS.exe)
-or- If you use WSL - Windows Subsidiary for Linux - Download [QMK_WSL](https://github.com/qmk/qmk_distro_wsl/releases/download/0.4.2/QMK_WSL.exe)

Go to [qmk_firmware](https://github.com/qmk/qmk_firmware) and Fork your own repo 
[MY Repo](https://github.com/jdenish1/qmk_firmware)

Install QMK_WSL and run
```sh
qmk-admin
```
and complete quickstart wizard using your fork of qmk_firmware.

### Usage

Run
```sh
qmk compile -kb <keyboard/location> -km <keymap/location>
```

<img src=https://wsl.qmk.fm/compile.png>
<img src=https://wsl.qmk.fm/finish.png>

#### Manual setup

Please follow these steps for manual setup:

1. [Download the precompiled template](https://github.com/dec0dOS/amazing-github-template/releases/download/latest/template.zip)
2. Replace all the [variables](#variables-reference) to your desired values
3. Initialize the repo in the precompiled template folder

    `or`

    Move the necessary files from precompiled template folder to your existing project directory. Don't forget the `.github` directory that may be hidden by default in your operating system

## Roadmap

See the [open issues](https://github.com/dec0dOS/amazing-github-template/issues) for a list of proposed features (and known issues).

- [Top Feature Requests](https://github.com/dec0dOS/amazing-github-template/issues?q=label%3Aenhancement+is%3Aopen+sort%3Areactions-%2B1-desc) (Add your votes using the 👍 reaction)
- [Top Bugs](https://github.com/dec0dOS/amazing-github-template/issues?q=is%3Aissue+is%3Aopen+label%3Abug+sort%3Areactions-%2B1-desc) (Add your votes using the 👍 reaction)
- [Newest Bugs](https://github.com/dec0dOS/amazing-github-template/issues?q=is%3Aopen+is%3Aissue+label%3Abug)

## Contributing

First off, thanks for taking the time to contribute! Contributions are what makes the open-source community such an amazing place to learn, inspire, and create. Any contributions you make will benefit everybody else and are **greatly appreciated**.

Please try to create bug reports that are:

- _Reproducible._ Include steps to reproduce the problem.
- _Specific._ Include as much detail as possible: which version, what environment, etc.
- _Unique._ Do not duplicate existing opened issues.
- _Scoped to a Single Bug._ One bug per report.

Please adhere to this project's [code of conduct](docs/CODE_OF_CONDUCT.md).

You can use [markdownlint-cli](https://github.com/igorshubovych/markdownlint-cli) to check for common markdown style inconsistency.

## Support



## Acknowledgements

Thanks for these awesome resources that were used during the development of the **Amazing GitHub template**:

- <https://github.com/cookiecutter/cookiecutter>
- <https://github.github.com/gfm/>
- <https://tom.preston-werner.com/2010/08/23/readme-driven-development.html>
- <https://changelog.com/posts/top-ten-reasons-why-i-wont-use-your-open-source-project>
- <https://thoughtbot.com/blog/how-to-write-a-great-readme>
- <https://www.makeareadme.com>
