/*
 *    This is the sixth day of the Roadmap.
 *    Today i'm gonna refactor and review everything i've done so far.
 *    This day is gonna prepare me for the final mini-project of the week.
 */

#include <stdio.h>
#include <string.h>

void print_and_variables() {
    
    /*
     *    ========================================
     *    PRINT AND VARIABLES
     *    ========================================
     */

    // print function
    printf("Hello world!\n\n");

    /*
     *    ======================= 
     *    INTEGERS
     */

    // variables
    // declare a variable and assign it a value at the same time
    int a = 10;

    // declare a variable without assigning it a value
    int b;
    // assign a value to a variable
    b = 20;

    // declare and assign a value to multiple variables at the same time
    int c = 30, d = 40;

    // print the value of a variable
    printf("a: %d\nb: %d\nc: %d\nd: %d\n\n", a, b, c, d);

    /*
     *    =======================
     *    FLOATS
     */

    // declare and assign a value to a float variable
    float e = 3.14;

    // print the value of a float variable
    printf("e: %.2f\n\n", e);

    /*
     *    =======================
     *    DOUBLES
     */

    // declare and assign a value to a double variable
    double f = 3.14159;

    // print the value of a double variable
    printf("f: %.5f\n\n", f);

    /*
     *    =======================
     *    CHARACTERS
     */

    // declare and assign a value to a character variable
    char g = 'a';

    // print the value of a character variable
    printf("g: %c\n\n", g);

    /*
     *    =======================
     *    STRINGS
     */

    // declare and assign a value to a string variable
    // strings are arrays of characters
    char h[] = "Hello world!";

    // print the value of a string variable
    printf("h: %s\n\n", h);

}

void conditionals() {
    
    /*
     *    ========================================
     *    CONDITIONALS
     *    ========================================
     */

    // if statement
    int a = 10;
    int b = 20;
    if (a > b) {
        printf("a is greater than b\n");
    }

    printf("\n");

    // if else statement
    int c = 30;
    int d = 40;
    if (c > d) {
        printf("c is greater than d\n");
    } else {
        printf("c is not greater than d\n");
    }

    printf("\n");

    // if else if statement
    int e = 50;
    int f = 60;
    if (e > f) {
        printf("e is greater than f\n");
    } else if (e < f) {
        printf("e is less than f\n");
    } else {
        printf("e is equal to f\n");
    }

    printf("\n");

    // switch statement
    int g = 70;
    switch (g) {
        case 1:
            printf("g is 1\n");
            break;
        case 2:
            printf("g is 2\n");
            break;
        default:
            printf("g is not 1 or 2\n");
            break;
    }

    printf("\n");

}

void loops() {
    
    /*
     *    ========================================
     *    LOOPS
     *    ========================================
     */

    // while loop
    int ab = 0;
    while (ab < 10) {
        printf("ab: %d\n", ab);
        ab++;
    }

    printf("\n");

    // do while loop
    int cd = 0;
    do {
        printf("cd: %d\n", cd);
        cd++;
    } while (cd < 10);

    printf("\n");

    // for loop
    for (int ef = 0; ef < 10; ef++) {
        printf("ef: %d\n", ef);
    }

}

void user_input() {
    
    /*
     *    ========================================
     *    USER INPUT
     *    ========================================
     */

    /*
     *    =======================
     *    SCANF
     */

    char name[50];
    printf("Enter your name (scanf) : ");
    scanf("%49s", name);
    printf("Hello %s!\n\n", name);

    // cleans the buffer
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);

    /*
     *    =======================
     *    GETCHAR
     */

    char name2[50];
    printf("Enter your name (getchar) : ");
    char ca;
    int ia = 0;
    while ((ca = getchar()) != '\n' && ia < 49) {
        name2[ia] = ca;
        ia++;
    }
    name2[ia] = '\0';
    printf("Hello %s!\n\n", name2);

    /*
     *    =======================
     *    PUTCHAR
     */

    char name3[50];
    printf("Enter your name (putchar) : ");
    char c;
    int i = 0;
    while ((c = getchar()) != '\n' && i < 49) {
        name3[i] = c;
        i++;
    }
    name3[i] = '\0';
    printf("Hello %s!\n\n", name3);

    /*
     *    =======================
     *    FGETS
     */

    char name4[50];
    printf("Enter your name (fgets) : ");
    fgets(name4, 50, stdin);
    name4[strcspn(name4, "\n")] = '\0';
    printf("Hello %s!\n\n", name4);

    // cleans the buffer
    while (getchar() != '\n' && getchar() != EOF);

}

int main() {
    
    // This is the main function

    print_and_variables();

    conditionals();

    loops();

    user_input();

    return 0;

}

/*
 *    I think this day was super useful.
 *    Tomorrow i'm gonna be extremely prepared for the final mini-project of the week.
 */
