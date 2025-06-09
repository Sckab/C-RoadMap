/*
 *    This is the first day of the second day of the roadmap.
 *    Last week was really easy and I learned the fundamentals of C.
 *    Today i'm gonna learn about pointers.
 *    Specifically, how to swap two values using pointers.
 */

#include <stdio.h>

int main() {

    int a = 1, b = 2;

    printf("a = %d, b = %d\n", a, b);

    int *aptr = &a;
    int *bptr = &b;

    int temp = *aptr;
    *aptr = *bptr;
    *bptr = temp;

    printf("a = %d, b = %d\n", a, b);

    return 0;
}

/*
 *    This day was pretty easy.
 *    I hope the other days will be just as easy.
 *    This week has started really well.
 */
