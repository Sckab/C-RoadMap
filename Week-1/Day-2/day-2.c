/*
 *  This is the second day of my road map.
 *  Day 2 of my roadmap: learning the different data types and I/O operations in C.
 */

#include <stdio.h>
#include <string.h>

int main() {

    // Define a intiger
    int intiger = 10;

    // Define a character
    char character = 'a';

    // Define a float
    float float_type = 3.14;

    // Define a double
    double double_type = 2.71828;

    // Print the values
    printf("intiger: %d\n", intiger);
    printf("character: %c\n", character);
    printf("float with 2 digits: %.2f\n", float_type);
    printf("double with 5 digits: %.5f\n\n", double_type);

    // Define a unsigned intiger
    unsigned int unsigned_intiger = 10;         // Can't be negative!!

    // Define a short intiger
    short int short_intiger = 10;               // Can't be bigger than 2^15 or smaller than -2^15 and occupy 2 bytes

    // Define a long intiger
    long int long_intiger = 10;                 // Can't be bigger than 2^31 or smaller than -2^31 and occupy 4 bytes

    // Define a long long intiger
    long long int long_long_intiger = 10;       // Can't be bigger than 2^63 or smaller than -2^63 and occupy 8 bytes

    // Print the values
    printf("unsigned intiger: %u\n", unsigned_intiger);
    printf("short intiger: %hi\n", short_intiger);
    printf("long intiger: %li\n", long_intiger);
    printf("long long intiger: %lli\n\n", long_long_intiger);

    // Print the size of the data types
    printf("Size of intiger: %lu\n", sizeof(intiger));
    printf("Size of character: %lu\n", sizeof(character));
    printf("Size of float: %lu\n", sizeof(float_type));
    printf("Size of double: %lu\n", sizeof(double_type));
    printf("Size of unsigned intiger: %lu\n", sizeof(unsigned_intiger));
    printf("Size of short intiger: %lu\n", sizeof(short_intiger));
    printf("Size of long intiger: %lu\n", sizeof(long_intiger));
    printf("Size of long long intiger: %lu\n\n", sizeof(long_long_intiger));

    // Get your name and print it
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    while (getchar() != '\n');                  // Clear the input buffer
    printf("Hi! %s\n\n", name);

    // Get your full name and print it
    char full_name[50];
    printf("Full name: ");
    fgets(full_name, 50, stdin);
    full_name[strcspn(full_name, "\n")] = '\0'; // Remove the newline character

    // Get your age and print it
    int age;
    printf("\nEnter your age: ");
    scanf("%d", &age);
    printf("You are %d years old!\n\n", age);

    // Print your name and age and print a greeting
    printf("Hi! %s, you are %d years old!\n", full_name, age);

    return 0;

}

/*    
 *  This was tougher than the the first day.
 *  But i learned a lot about data types and I/O operations in C.
 *  I learnt how to print strings, integers, floats, doubles, characters, unsigned integers, short integers, long integers, and long long integers in C.
 */
