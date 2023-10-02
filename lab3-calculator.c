/*
Author: Isabelle O'Keeffe
Date: Week of the 25th of Septemver
The program is to create a calculator which takes in the required operands and operators fromt he commandline
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to calculate the product of two numbers
float multiply(float num1, float num2) {
    return num1 * num2;
}

// Function to calculate the division of two numbers
float divide(float num1, float num2) {
    if (num2 == 0) {
        printf("invalid\n");
        return 0.0; // Return 0 to indicate division by zero
    }
    return num1 / num2;
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Invalid number of arguments. Usage: %s <operator> <operand1> <operand2>\n", argv[0]);
        return 1; // Return error code 1 to indicate invalid usage
    }

    char *operator = argv[1];
    float operand1 = atof(argv[2]);
    float operand2 = atof(argv[3]);

    float result;

    if (strcmp(operator, "multiply") == 0) {
        result = multiply(operand1, operand2);
        printf("%f\n", result);
    } else if (strcmp(operator, "divide") == 0) {
        result = divide(operand1, operand2);
        if (result != 0.0) {
            printf("%f\n", result);
        }
    } else {
        printf("Invalid operator. Use 'multiply' or 'divide'.\n");
        return 1; // Return error code 1 to indicate invalid operator
    }

    return 0; // Return success code 0
}