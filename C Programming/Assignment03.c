/*
Write a C program that gets a positive integer (int) from the user.
Use a for, while, or do…while loop structure to add the integers from 1 to the integer the user entered.
Input will be ideal.
*/

#include <stdio.h>
int counterNumber=0;
int totalNumber=0;
int numberEntered;
int doWhileNumber=0;
int doWhileTotal=0;
int forNumber = 0;
int forTotal = 0;

int main()
{
	printf("Enter a number: ");
	scanf("%d", &numberEntered);

	while (counterNumber < (numberEntered+1))
	{
		totalNumber = totalNumber + counterNumber;
		counterNumber++;
		
	}
	printf("-------------------while loop-------------------\n The sum of the intergers from 1 to %d is %d \n\n", numberEntered, totalNumber);

	do {
		doWhileTotal = doWhileTotal + doWhileNumber;
		doWhileNumber++;

	} while (doWhileNumber < (numberEntered + 1));
		printf("-------------------do while loop-------------------\n The sum of the intergers from 1 to %d is %d \n\n ", numberEntered, doWhileTotal);

		for (forNumber = 0; forNumber < (numberEntered+1); forNumber++)
		{
			forTotal = forTotal + forNumber;
			}
		printf("-------------------for loop-------------------\n The sum of the intergers from 1 to %d is %d \n\n", numberEntered, forTotal);
}

