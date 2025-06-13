/*
 *    This is the fiveth day of the first week of the Roadmap
 *    Today i'm gonna learn about structs
 *    Mini Task: Define a Student struct and store a list of students using dynamic memory.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct typedef definition
typedef struct
{
	char name[50];
	int age;
	float gpa;
} Student;

Student Giuliano;

int main()
{

	// assign values to the struct
	strcpy(Giuliano.name, "Giuliano");
	Giuliano.age = 16;
	Giuliano.gpa = 3.5;

	// print the struct
	printf("Name: %s\n", Giuliano.name);
	printf("Age: %d\n", Giuliano.age);
	printf("GPA: %.2f\n", Giuliano.gpa);

	printf("\n");

	// ==========================
	// MINI TASK
	printf("How many students do you want to store? ");
	int numberOfStudents;
	scanf("%d", &numberOfStudents);

	Student *students = malloc(numberOfStudents * sizeof(Student));

	for (int i = 0; i < numberOfStudents; i++)
	{
		printf("Name: ");
		scanf("%s", students[i].name);
		printf("Age: ");
		scanf("%d", &students[i].age);
		printf("GPA: ");
		scanf("%f", &students[i].gpa);
	}

	for (int i = 0; i < numberOfStudents; i++)
	{
		printf("Student %d\n", i + 1);
		printf("Name: %s", students[i].name);
		printf(" | Age: %d", students[i].age);
		printf(" | GPA: %.2f", students[i].gpa);
		printf("\n\n");
	}

	return 0;
}

/*
 *    This day was pretty easy.
 *    Tbth i do not like struct too much.
 *    But they are cool, i hope the next day will be better.
 */
