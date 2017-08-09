/*
Write a function that takes two ints and returns the average (float) of those two ints. 
Include a function prototype. 
In main, call the function with two int inputs of your choice and print the returned value to the output window.
*/

#include <stdio.h>

float averageCalc(float num1, float num2); // returns int and takes two ints (adds two numbers)

int main()
{
	float firstFloat;
	float nextFloat;
	float sum;
	printf("Enter two floats: ");
	scanf("%f %f", &firstFloat, &nextFloat);
	sum = averageCalc(firstFloat, nextFloat);
	printf("The average of %.2f and %.2f is %.2f.\n\n", firstFloat, nextFloat, sum);
}

float averageCalc(float firstFloat, float nextFloat)
{
	float sum = (firstFloat + nextFloat)/2;
	return sum; // return sum;
}