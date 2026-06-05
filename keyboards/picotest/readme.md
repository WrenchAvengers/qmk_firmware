# picotest

![picotest](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [WrenchAvengers](https://github.com/WrenchAvengers)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make picotest:default

Flashing example for this keyboard:

    make picotest:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

Matts note right off.
for choosing the Master side Left or Right im using the Pin method since there is free GPIO.
but the way this works is it checks for a certain pin and if that pin is grounded then that board is master. as well as the master side has to have USB to PC.
using gp22 for now. if its grounded then that side has to be master. it also seems that azoteq should be on the master side so for mine im putting it on the right side so Right will be master
to make that i needed to add #define MASTER_RIGHT to the config.h if using left as master then that line should be removed.

TODO:

