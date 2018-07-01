# Formula

A formula module by Frank Buss, based on BokontepByteBeatMachine.

This plugin provides 3 inputs: x, y and z. In the text field you can write a formula for the output.
E.g. x+y would be a simple adder. Also supported are a range of standard math functions:

acos, asin, atan, atan2, cos, cosh, exp, abs, mod, log, log10, pow, sin, sinh, tan, tanh, sqrt, ceil, floor, max, and min

So if you feed a sawtooth with an amplitude from 0 to 2*PI to X, you will get a sine wave at the output.

Some functions take 2 arguments. For example you could use the max function, to get either the input x or the input y, depending on which
voltage is higher: max(x, y).

The red LED is blinking if there is a parsing error. If it is on, the formula is running. To compile a formula, use the
context menu and the Initialize function, or the CTRL-I keyboard shortcut.
