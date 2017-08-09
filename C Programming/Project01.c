/*
You are the head programmer at Cool School University. 
You are tasked with writing a program to take input for a student and print the cost of attending classes this semester. 
The unit cost is $100 (use a preprocessor directive to define this as a constant value). 
Furthermore, if a student is enrolled in more than 12 units, they receive a $10 discount for every unit they take over 12.
Students that live on campus are charged an extra $1000 for housing costs. 
Your tasks are to get a student name with spaces (char array), y or n (char) for living on campus, and number of units enrolled (int) from the console. 
Calculate the amount due using the criterion above and print the output to the console window. 
Use the same data types listed above.
*/
#include <stdio.h>


#define UNIT_COST 100

int main()
{
	char name[60];
	char yesNo;
	int unitCount = 0;
	float totalCost = 0;
	int unitOperator = 0;
	//get the name
	printf("Enter your name: ");
	fgets(name, 60, stdin);
	//get if the student lives on campus
	printf("\nEnter y if student lives on campus, n otherwise: ");
	scanf("%c", &yesNo);
	//if they do add 1000 to totalCost
	if (yesNo == 'y' || yesNo == 'Y')
	{
		totalCost = (totalCost + 1000);
	}
	//get current unit count
	printf("\nEnter current unit count: ");
	scanf("%d", &unitCount);
	//set unitOperator to unitCount
	unitOperator = (unitCount);
	//calculate totalCost
	totalCost = totalCost + (unitOperator*UNIT_COST);

	//while units >12 
	while (unitOperator > 12)
	{
		totalCost = totalCost - 10;
		unitOperator--;
	}

	printf("\n\nStudent Name: %s \nAmount Due: %f\n\n\n", name, totalCost);

}