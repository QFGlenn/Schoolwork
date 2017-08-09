/*
Make the following improvements to Project 2.

Store the student names in a multidimensional array and amounts due in a single dimension array.
This will allow you to get input for all 5 students without printing.
Then once all 5 students have been entered, print their names and amounts due as shown below.
Write a function called getInput that returns void and takes char* (for name), int (for name length – may be optional for some), char* (for y or n response), and int* (for units).
In the body of the function prompt the user  and store input for a student name, char (y or n) depending on if they live on campus, and int for number of units.
Remember when using scanf with pointers no ampersand is needed. fgets/gets stays the same (no ampersand).
e.g. getInput(names[i], nameLen, &onCampus, &units);

You can break this into smaller functions like getName, getHousing, and getUnits but they must be pass by reference.
Write a function called printOutput that returns void and takes a const char* (for name) and const int (for tuition cost).
In the body of the function print a label, student name and new line followed by a label and the amount due.
e.g. printOutput(names[i], tuitionCost[i]);

Do NOT use global variables. The global constants defined in previous programs are OK.

Challenge Exercise 1 – Allow the user to stop entering data early if -1 is entered as input.
The program should print all information currently stored. Calculations must be correct.

Challenge Exercise 2 – Make a menu and allow the user to add or print students (up to 5) based on a menu selection.

*/

#include <stdio.h>


#define UNIT_COST 100
#define NAME_SIZE 30
#define STUDENT_COUNT 5


void getInput(char*, int, char*, int*);
int costCalculator(int a, char b);
void printOutput(const char*, const float);

int main()
{
	char studentName[STUDENT_COUNT][NAME_SIZE];
	char yesNo;
	int unitCount;
	float totalCost = 0;
	float tuitionCost[STUDENT_COUNT];

	for (int x = 0; x < STUDENT_COUNT; x++)
	
	{
		getInput(studentName[x], NAME_SIZE, &yesNo, &unitCount);
		
		getchar();

		tuitionCost[x] = costCalculator(unitCount, yesNo);
						
	}

	for (int y = 0; y < STUDENT_COUNT; y++)
	{
		printOutput(studentName[y], tuitionCost[y]);

	}
	
}

void getInput(char* name, int size, char* yn, int* units)
{
	//get the name
	printf("\nEnter your name: ");
	fgets(name, size, stdin);
	//get if the student lives on campus
	printf("\nEnter y if student lives on campus, n otherwise: ");
	scanf("%c", yn);
	//get current unit count
	printf("\nEnter current unit count: ");
	scanf("%d", units);
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

void printOutput(const char* name, const float totalcost)

{
	printf("\n Student Name is : %s ", name);
	printf("\n Cost is : %.2f\n", totalcost);
}