# Armstrong Number Checker
## Description:
This C program checks whether a given number is an Armstrong number or not. An Armstrong number (or narcissistic number) for a given number of digits is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

## Requirements:
This program requires a C compiler to be installed on your system, such as GCC.
## Usage:
1. Compile the Program:
- Open your terminal or command prompt.
- Navigate to the directory containing the source code (`armstrong.c`).
- Compile the program using the following command:
```console
gcc -o armstrong amstrong.c
```
This will generate an executable file named armstrong in the same directory.
2. Run the Program:
- After successfully compiling, run the program by entering:
```console
./armstrong
```
- You will be prompted to enter a number.
3. Input:
- Enter a number when prompted and press Enter.
4. Output:
- The program will output whether the entered number is an Armstrong number or not.
## Example:
Suppose you run the program and enter the number `153`.
- The program will calculate:
```console
1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
```
- Since 153 equals the sum of its own digits raised to the power of the number of digits, the program will output:
```console
The number 153 is Armstrong!
```
## Notes:
- Make sure to enter a non-negative integer when prompted.
- The program handles integers only; decimal numbers will be truncated.
