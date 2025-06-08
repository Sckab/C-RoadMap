/*
 *    This is the file that contains the function that asks the user for numbers
 *    I will create a header file for this
 */

#include <stdio.h>
#include "globals.h"
#include "ask_numbers.h"

void ask_numbers() {

    printf("Insert the first number: ");
    scanf("%lf", &num1);
    printf("Insert the second number: ");
    scanf("%lf", &num2);

}

void ask_operator() {

    printf("Insert the operator (+, -, *, /) : ");
    scanf(" %c", &operation);

}
