/*
 *    This is the mini project for week 1!
 *    The main file is the file that contains the main function
 *    I'm so excited
 */

#include <stdio.h>
#include "ask_numbers.h"
#include "calculator.h"
#include "globals.h"

void setup() {
    
    ask_numbers();
    ask_operator();

    switch (operation) {
        case '+':
            add(num1, num2);
            break;
        case '-':
            subtract(num1, num2);
            break;
        case '*':
            multiply(num1, num2);
            break;
        case '/':
            if (num2 == 0 || num1 == 0) {
                printf("Cannot divide by 0\n");
                setup();
            } else {
                divide(num1, num2);
            }
            break;
    }

}

int main() {

    printf("Welcome to the calculator\n");

    setup();

    printf("You want to do another calculation? (y/n)\n");
    char answer;
    scanf(" %c", &answer);
    if (answer == 'y' || answer == 'Y') {
        setup();
    } else {
        printf("Thanks for using the calculator\n");
    }
 
    return 0;

}

/*
 *    This turns out to be super simple but super cool!!
 *    I made my first make file and .h files, this was a beautiful week and day!
 *    I hope the next one is even better and easier
 */
