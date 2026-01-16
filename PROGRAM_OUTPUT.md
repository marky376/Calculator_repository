# Calculator Program Output

## Program Information
- **Program Name**: Function Pointer Calculator
- **Source File**: `01calculator.c/function_pointer_calc.c`
- **Language**: C
- **Compilation**: `gcc function_pointer_calc.c -o calculator`

## Program Description
This calculator program uses function pointers to perform basic arithmetic operations (addition, subtraction, and multiplication) on two predefined numbers: a = 15 and b = 10.

## Program Execution and Output

### Test 1: Addition (Choice 0)
```
$ echo "0" | ./calculator
Enter Choice: 0 for add
 1 for subtract
 2 for multiply
The addition is 25
```
**Result**: 15 + 10 = 25 ✓

### Test 2: Subtraction (Choice 1)
```
$ echo "1" | ./calculator
Enter Choice: 0 for add
 1 for subtract
 2 for multiply
The subtraction is 5
```
**Result**: 15 - 10 = 5 ✓

### Test 3: Multiplication (Choice 2)
```
$ echo "2" | ./calculator
Enter Choice: 0 for add
 1 for subtract
 2 for multiply
The multiplication is 150
```
**Result**: 15 × 10 = 150 ✓

## Summary
All three operations completed successfully:
- Addition: 15 + 10 = 25
- Subtraction: 15 - 10 = 5
- Multiplication: 15 × 10 = 150

The program demonstrates the use of function pointers in C to create a simple calculator interface.
