# Simple Calculator

This is a simple calculator application implemented in C on the Tiva C board. It was created as part of a training at EUI.

## Features

- Performs basic arithmetic operations (+, -, \*, /)
- Handles multi-digit inputs
- Follows order of operations using operator precedence
- Handles errors like divide by zero

## Usage

The calculator takes input as a series of numbers and operators. Each number or operator is passed as a character to the `CALCULATE()` function.

For example:

```c
CALCULATE('5'); 
CALCULATE('+');
CALCULATE('4');
CALCULATE('=');
```
Would perform 5 + 4 and store the result.

Multiple operations can be chained together following the normal order of operations.

## Implementation
NUMBERS_NUMBER[] array holds the numeric operands.
OPERATION[] array holds the operator characters.
Get_Priority() determines the precedence of operators.
Perform_Operation() does the actual calculation.
CALCULATE() controls the overall flow and stores state.

## Key aspects:

Static variables track state between calls.
Temporary variable builds up multi-digit numbers.
Operator precedence handles the order of operations.
Follows the pattern of operator, operand, operator, operand, etc.
License
This project is open source and available under the MIT License.

Copy

By applying the Markdown annotations, the README file appears visually appealing and easy to read when rendered on GitHub.```
