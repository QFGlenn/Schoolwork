/*
Modify your program 3 to include a student struct. 
Data members should include char array (or char*) for name, char for housing response, and int for units taken at a minimum. 
All student data that was stored in separate arrays should now be stored in a student struct array. 
The getInput function should be pass by reference (struct student*). 
The others, depending on how they are coded, can be pass by value (struct student). 
Use the struct in your code. 
If this is unclear, email me. 
I will not consider the assignment "description is confusing" as a valid excuse for not completing the assignment.
*/

#include <stdio.h>


#define UNIT_COST 100
#define NAME_SIZE 30
#define STUDENT_COUNT 5

struct student 
{
	char name[NAME_SIZE];
	char yesNo;
	int units;
	float totalCost;
};

void getInput(struct student* student);
void costCalculator(struct student* student);
void printOutput(struct student student);

int main()
{
	struct student studentClass[STUDENT_COUNT];
	float sum=0;
	float average=0;

	for (int x = 0; x < STUDENT_COUNT; x++)

	{
		getInput(&studentClass[x]);

		getchar();
		costCalculator(&studentClass[x]);
		//printf("student cost %.2f", studentClass[x].totalCost);

	}

	for (int y = 0; y < STUDENT_COUNT; y++)
	{
		printOutput(studentClass[y]);

	}
	for (int z = 0; z < STUDENT_COUNT; z++)

	{
		sum = sum + studentClass[z].totalCost;
	}
	
	average = sum / STUDENT_COUNT;
	printf("\nAverage cost is %.2f\n", average);
		
}

void getInput(struct student* student)
{
	//get the name
	printf("\nEnter your name: ");
	fgets(student->name, 30, stdin);
	//get if the student lives on campus
	printf("\nEnter y if student lives on campus, n otherwise: ");
	scanf(" %c", &student->yesNo);
	//get current unit count
	printf("\nEnter current unit count: ");
	scanf("%d", &student->units);
}

void costCalculator(struct student* student)
{
	int unitOperator = 0;
	float sumCost = 0;
	student->totalCost = 0;

	//if they do add 1000 to totalCost
	if (student->yesNo == 'y' || student->yesNo == 'Y')
	{
		student->totalCost = (student->totalCost + 1000);
	}
	//set unitOperator to unitCount
	unitOperator = (student->units);
	//calculate totalCost
	student->totalCost = student->totalCost + (unitOperator*UNIT_COST);
	//printf("%d\n", student->totalCost);
	//while units >12 
	while (unitOperator > 12)
	{
		student->totalCost = student->totalCost - 10;
		unitOperator--;
	}

}

void printOutput(struct student student)

{
	printf("\n Student Name is : %s ", student.name);
	printf("\n Cost is : %.2f\n", student.totalCost);
}