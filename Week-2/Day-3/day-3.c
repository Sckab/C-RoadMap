/*
 *    Day 3 of the second week of the RoadMap:
 *    Strings.
 *    Mini Task: Implement your own strlen and strcpy.
 */

#include <stdio.h>
#include <string.h>

int main() {

	// Strings are arrays of characters
	char string[20] = "Hello, World!";

	printf("%s\n\n", string);

	// strlen returns the length of the string
	printf("The length of the string is: %d\n\n", strlen(string));

	// strcpy copies the string
	char string2[20];
	strcpy(string2, string);
	printf("The copied string is: %s\n\n", string2);

	// strcat concatenates the strings
	char string3[20] = "Hello, ";
	char string4[20] = "World!";
	strcat(string3, string4);
	printf("The concatenated string is: %s\n\n", string3);

	// strcmp compares the strings
	char string5[20] = "Hello, World!";
	char string6[20] = "Hello, World!";
	int result = strcmp(string5, string6);
	if (result == 0) {
		printf("The strings are equal\n\n");
	} else {
		printf("The strings are not equal\n\n");
	}

	/*
	 *    ==========================
	 *    MINI TASK
	 */

	// STRLEN:
	char string7[20] = "Hello, World!";
	int length = 0;
	while (string7[length] != '\0') {
		length++;
	}
	printf("The length of the string is: %d\n\n", length);

	// my own STRCPY:
	char string8[20];
	int i = 0;
	while (string7[i] != '\0') {
		string8[i] = string7[i];
		i++;
	}
	printf("The copied string is: %s\n", string8);

	return 0;
}

/*
 *    This day was pretty tough tbth, but I learned a lot about strings.
 *    I also learned how to implement my own strlen and strcpy functions.
 *    I'm loving this RoadMap so far!
 */
