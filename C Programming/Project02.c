/*
Make the following improvements to your program for Project 1.

Use a looping structure to get input for exactly 5 students
and print output for exactly 5 students.

Add a function to calculate the amount due for a student.
The function should take a char and int parameters and return an int.
Remove the calculations from main and instead call the function you 
have written inside main. Only one function needs to be written to 
accomplish this task. Do NOT copy all of main into this function. 
The function should take values entered for the units and living on 
campus that were entered in main. Do NOT print from this function.

Calculate and print the average amount due for the 5 students entered.
HINT: If upon entering the loop for the second time it skips the 
"enter name" prompt, use getchar(); or while((getchar()) != '\n');
to remove the new line character that is left on the input stream 
when entering the previous student's data.

*/

#include <stdio.h>


#define UNIT_COST 100

int costCalculator(int a, char b);

int main()
{
	float sumCost = 0;
	float costAverage = 0;

	for (int x = 0; x < 5; x++)
	{
		char name[60];
		char yesNo;
		int unitCount = 0;
		float totalCost = 0;


		//get the name
		printf("Enter your name: ");
		fgets(name, 60, stdin);
		//get if the student lives on campus
		printf("\nEnter y if student lives on campus, n otherwise: ");
		scanf("%c", &yesNo);
		//get current unit count
		printf("\nEnter current unit count: ");
		scanf("%d", &unitCount);
		getchar();
		totalCost = costCalculator(unitCount, yesNo);
		printf("\n\nStudent Name: %s \nAmount Due: %.2f\n\n\n", name, totalCost);
		sumCost = sumCost + totalCost;
	}
	costAverage = sumCost / 5;
	printf("\n\nAll students owe an average of %.2f\n", costAverage);
}

int costCalculator(int a, char b)
{
	int unitOperator = 0;
	float sumCost = 0;
	//if they do add 1000 to totalCost
	if (b == 'y' || b == 'Y')
	{
		sumCost = (sumCost + 1000);
	}
	//set unitOperator to unitCount
	unitOperator = (a);
	//calculate totalCost
	sumCost = sumCost + (unitOperator*UNIT_COST);

	//while units >12 
	while (unitOperator > 12)
	{
		sumCost = sumCost - 10;
		unitOperator--;
	}
	return(sumCost);
}