/*
 *    This is the third day of my road map.
 *    Day 3 of my roadmap: learning if, else, switch in C.
 */

#include <stdio.h>

int main() {

    // Age
    int age;
    printf("Hi! How old are you? ");
    scanf("%d", &age);

    // If/else
    if (age >= 18) {
        printf("You are an adult.\n\n");
    } else if (age < 18) {
        printf("You are a minor.\n\n");
    } else if (age >= 65) {
        printf("You are an elder.\n\n");
    } else if (age >= 120) {
        printf("You are a ghost.\n\n");
    } else if (age <= 0) {
        printf("You are a ghost.\n\n");
    }

    // Day of the week
    int day_of_the_week;
    printf("What day of the week is today? (number) ");
    scanf("%d", &day_of_the_week);

    // Switch
    switch (day_of_the_week) {
        case 1:
            printf("Today is Monday.\n");
            break;
        case 2:
            printf("Today is Tuesday.\n");
            break;
        case 3:
            printf("Today is Wednesday.\n");
            break;
        case 4:
            printf("Today is Thursday.\n");
            break;
        case 5:
            printf("Today is Friday.\n");
            break;
        case 6:
            printf("Today is Saturday.\n");
            break;
        case 7:
            printf("Today is Sunday.\n");
            break;
        default:
            printf("Invalid day of the week.\n");
            break;
    }

    return 0;

}

/*
 *    This was a really easy day.   
 *    I learned about if, else, switch in C.  
 */
