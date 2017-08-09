/*
Declare a triangle struct with two floats as data members. 
One float will be for the height and one for the length.

Write a function that takes a triangle struct (struct triangle) and returns a float. 
The function should calculate and return the area of the triangle. 
The formula is area = (1/2) * base * height.

In main, define a triangle struct and prompt the user for two floats 
(base and height). Call the function and print the area in main.
*/

#include<stdio.h>

struct triAngle
{
	float length;
	float height;
};

float triangulaTor(struct triAngle a);


int main()
{
	float areaTriangle;
	
	struct triAngle rightTriangle = {4,3};

	areaTriangle = triangulaTor(rightTriangle);

	printf("The area of the triangle with base %.2f and height %.2f is %.2f\n", rightTriangle.length, rightTriangle.height, areaTriangle);

}

float triangulaTor(struct triAngle a )
{
	float area;

	area = (.5*a.length*a.height);

	return(area);


}