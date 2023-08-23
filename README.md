# EUI_trainging
in this github i will share all my work in the EUI trainings

Simple Calculator
This is a simple calculator application implemented in C on the Tiva C board. It was created as part of a training at EUI.

Features
Performs basic arithmetic operations (+, -, *, /)
Handles multi-digit inputs
Follows order of operations using operator precedence
Handles errors like divide by zero
Usage
The calculator takes input as a series of numbers and operators. Each number or operator is passed as a character to the CALCULATE() function.

For example:

c
Copy
CALCULATE('5'); 
CALCULATE('+');
CALCULATE('4');
CALCULATE('=');
Would perform 5 + 4 and store the result.

Multiple operations can be chained together following the normal order of operations.

Implementation
NUMBERS_NUMBER[] array holds the numeric operands
OPERATION[] array holds the operator characters
Get_Priority() determines precedence of operators
Perform_Operation() does the actual calculation
CALCULATE() controls overall flow and stores state
Key aspects:

Static variables track state between calls
Temporary variable builds up multi-digit numbers
Operator precedence handles order of operations
Follows pattern of operator, operand, operator, operand, etc.
License
This project is open source and available under the MIT License.
