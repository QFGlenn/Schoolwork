/*
Assignment 9 Prompt

You will write two functions and call the functions in main.

Function 1 – Write a function that returns void and takes an int * (pointer to integer array) or int[], and int(for the size).
The function needs to initialize all the elements of the array to non - zero values.

Function 2 – Write another function that returns int and takes an const int * (pointer to integer array) or int[], and int(for the size).
The function should sum all the elements of the array and return the sum.


In main define an integer array of size 5. Call function 1 in main to initialize the values of the array.
Call function 2 in main to get the sum and print the value of the sum to the console. 
*/

#include<stdio.h>
#include <stdlib.h>

void functionOne(int* ptr, int size);
int functionTwo(const int* ptr, int size);
void deBug(int* ptr, int size);

int main()
{
	int* intergers[5];
	int size = 5;
	int sum;
	srand((unsigned int)time(NULL));

	functionOne(intergers, size);

	//Debugging functionOne to make sure it is assigning values to the pointer array
	//deBug(intergers, size);

	sum = functionTwo(intergers, size);
	printf("The sum of %d %d %d %d and %d is, of course, %d.\n", intergers[0], intergers[1], intergers[2], intergers[3], intergers[4], sum);
}

void functionOne(int* ptr, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		ptr[i] = rand() % RAND_MAX + 1;
	
	}
}

int functionTwo(const int* ptr, int size)
{
	int i;
	int number=0;
	int suM = 0;
	for (i = 0; i < size; i++)
	{
		number = ptr[i];
		suM = number + suM;

	}
	return suM;
	//printf("The sum of %d %d %d %d and %d is, of course, %d.\n", ptr[0], ptr[1], ptr[2], ptr[3], ptr[4], sum);
}


void deBug(int* ptr, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", ptr[i]);
	}

	printf("\n");
}