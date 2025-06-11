/*
 *    Yesterday i missed this day because i was fixing an error in my nvim
 *    config.
 *    So today i'm going to do day 2 and day 3 in the same day.
 *    Day 2 of the second week of the RoadMap:
 *    Pointers and Arrays.
 *    Mini Task: Write a program that calculates the average of a float array
 *    using pointers.
 */

#include <stdio.h>

int main() {

    // This is an array
    int array[5] = {1, 2, 3, 4, 5};

    // How to print an array
    for (int i = 0; i < 5; i++) {
	printf("%d\n", array[i]);
    }

    printf("\n");

    // This is a pointer
    int a = 10;
    int *pointer = &a;

    // How to print a pointer, prints the memory address
    printf("Memory address: \n");
    printf("%d\n", pointer);

    printf("\n");

    /*
     * ==========================
     * MINI TASK
     */

    // Float array
    float float_array[5] = {1.0, 2.0, 3.0, 4.0, 5.0};

    // Pointer to the first element of the array
    float *ptr = float_array;

    float sum = 0.0;

    // Loop with pointer
    for (int i = 0; i < 5; i++) {
	sum += *(ptr + i); // equivalent to float_array[i]
    }

    float average = sum / 5;

    printf("Average: %f\n", average);

    return 0;
}

/*
 *    This day was very easy, i thought it was a lot more difficult than i
 *    expected.
 */
