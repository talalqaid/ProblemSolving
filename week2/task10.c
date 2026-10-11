/* Week 2 - Exercise 10: Simple Calculator
   Ask the user to enter two numbers and an arithmetic operator (+, -, *, /). Perform the selected operation using if / else if statements. Display an error if the operator is invalid or if division by zero is requested.
*/

#include <stdio.h>

int main(void) {
    double a, b, result;
    char op;
    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%lf", &b);
    if (op == '+') {
        result = a + b;
        printf("Result: %.2f\n", result);
    } else if (op == '-') {
        result = a - b;
        printf("Result: %.2f\n", result);
    } else if (op == '*') {
        result = a * b;
        printf("Result: %.2f\n", result);
    } else if (op == '/') {
        if (b == 0) {
            printf("Cannot divide by zero.\n");
        } else {
            result = a / b;
            printf("Result: %.2f\n", result);
        }
    } else {
        printf("Invalid operator.\n");
    }
    return 0;
}
