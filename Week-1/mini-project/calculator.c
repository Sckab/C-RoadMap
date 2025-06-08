/*
 *    This is the actual calculator file
 *    Here i will create the functions
 *    I will also create an .h file and for each operator i will create a function
 */

#include <stdio.h>
#include "calculator.h"
#include "globals.h"

void print_clean(double num) {
    if ((int)num == num) {
        printf("%.0f", num);
    } else {
        printf("%g", num);
    }
}

void add(double num1, double num2) {
    print_clean(num1);
    printf(" + ");
    print_clean(num2);
    printf(" = ");
    print_clean(num1 + num2);
    printf("\n");
}

void subtract(double num1, double num2) {
    print_clean(num1);
    printf(" - ");
    print_clean(num2);
    printf(" = ");
    print_clean(num1 - num2);
    printf("\n");
}

void multiply(double num1, double num2) {
    print_clean(num1);
    printf(" * ");
    print_clean(num2);
    printf(" = ");
    print_clean(num1 * num2);
    printf("\n");
}

void divide(double num1, double num2) {
    print_clean(num1);
    printf(" / ");
    print_clean(num2);
    printf(" = ");
    print_clean(num1 / num2);
    printf("\n");
}
