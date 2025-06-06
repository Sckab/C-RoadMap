/*
 *     This is my fifth day of the roadmap.
 *     Today i'm gonna learn about functions in C.
 */

#include <stdio.h>

// ask the operator
void calculator() {

    // variables
    int number1, number2;
    char operator;

    // asking the user to input the numbers
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);

    // clear the buffer
    getchar();

    // asking the user to input the operator
    printf("What operator do you want to use? (+ - * /) ");
    scanf("%c", &operator);

    // switch statement
    switch (operator) {
        case '+':
            printf("%d + %d = %d", number1, number2, number1 + number2);
            break;
        case '-':
            printf("%d - %d = %d", number1, number2, number1 - number2);
            break;
        case '*':
            printf("%d * %d = %d", number1, number2, number1 * number2);
            break;
        case '/':
            if (number2 == 0) {
                printf("Cannot divide by zero");
                return calculator();
            } else {
                printf("%d / %d = %d", number1, number2, number1 / number2);
            }
            break;
        default:
            printf("Invalid operator \n\n");
            return calculator();
            break;
    }

}

// main function
int main() {

    calculator();

    return 0;

}

/*
 *    This day was the best one, i really enjoyed it!
 *    I learned about functions and how to use them.
 */
