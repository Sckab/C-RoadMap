/*
 *    This is the fourth day of the second week in my road map.
 *    Today i'm gonna learn about, malloc, calloc, realloc, free.
 *    Mini Task: Create a program that asks for `n` integers and stores them in a dynamically allocated array.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	// Malloc
	int *p = malloc(5 * sizeof(int));
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	p[3] = 4;
	p[4] = 5;

	printf("p malloc: \n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", p[i]);
	}

	// Do not free, the memory will be freed when reallocated

	printf("\n\n");

	// Calloc
	int *q = calloc(5, sizeof(int)); // <-- safer
	q[0] = 1;
	q[1] = 2;
	q[2] = 3;
	q[3] = 4;
	q[4] = 5;

	printf("q: \n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", q[i]);
	}

	free(q); // Free the memory

	printf("\n\n");

	// Realloc
	p = realloc(p, 10 * sizeof(int));
	p[5] = 6;
	p[6] = 7;
	p[7] = 8;
	p[8] = 9;
	p[9] = 10;

	printf("p realloc: \n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", p[i]);
	}

	free(p);

	printf("\n\n");

	/*
	 *    =======================
	 *    MINI TASK
	 */
	int n;
	printf("How many integers do you want to store? ");
	scanf("%d", &n);

	int *array = calloc(n, sizeof(int));

	for (int i = 0; i < n; i++) {
		printf("Enter the %d integer: \n", i + 1);
		scanf("%d", &array[i]);
	}

	printf("integers stored: \n");

	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}

	free(array);

	return 0;
}

/*
 *    THIS DAY WAS BEATYFULL!!!!
 *    I loved this day, the best of the whole roadmap.
 *    I can't wait for the mini project of this week.
 */
