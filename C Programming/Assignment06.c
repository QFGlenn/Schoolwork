/*
Write a recursive function (a function that calls itself) that takes an int parameter, say n, 
and returns the sum of the integers from 1 to n (returns int). 
In main call your function with an argument of your choice and print the results.
*/

#include<stdio.h>

int functionOne(int);

int main()
{
	int userInt;
	int returnInt;

	printf("Enter a number (Tip: Must be an int less than or equal to 4538): ");
	scanf("%d", &userInt);
	while (userInt > 4538)
	{
		printf("You don't follow instructions well, do you...\nTry again, and this time make is LESS than 4538!\n\n");
		printf("Enter a number (Tip: Must be an int less than or equal to 4538): ");
		scanf("%d", &userInt);
	}

		returnInt = functionOne(userInt);
		printf("\nThe sum from 1 to %d is %d. Neat! \n ", userInt, returnInt);

		
	}


int functionOne(int userInt)
{
	int resultInt;

	if (userInt == 1)
	{
		
		return(1);
	}
	else
	{
		resultInt = userInt + functionOne(userInt-1);
	}

	return(resultInt);
	
}