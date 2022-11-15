// grading system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>

/* if else statement */

int main()
{
	int marks;
	marks = 39;

	if (marks >= 70)
		printf("GRADE A");

	else if (marks >= 60)

		printf("GRADE B ");

	else if (marks >= 50)
		printf("GRADE C");

	else if (marks >= 40)
		printf("GRADE D");

	else
		printf("F");

	return 0;

}