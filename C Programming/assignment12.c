/*
Define a point struct with data members x and y(both floats).
Write a function that takes two points as parameters and returns the distance of the two points.
In main declare and initialize two different points.
Call the function you wrote to display the distance between the two points to the console.
Include the math.h library.The distance formula is d = sqrt((x2 – x1) ^ 2 + (y2 – y1) ^ 2).
DO NOT COPY THIS FORMULA INTO YOUR PROGRAM.IT MAY BREAK IT.
This formula is not in C.If you copy this formula and modify it to be in C, you may still get a strange invalid character error(\226).
The caret operator (^) is not valid C.There are sqrt() and pow() functions in the math.h library that may be useful.
*/

#include<stdio.h>
#include<math.h>

float distanceCalc(float, float, float, float);

struct circulaR
{
	float x;
	float y;
};



int main()
{
	float distance;
	struct circulaR point1 = { 4,20 };
	struct circulaR point2 = { 24,7 };

	distance=distanceCalc(point1.x, point1.y, point2.x, point2.y);
	printf("The distance between %.2f,%.2f and %.2f,%.2f is %.2f", point1.x, point1.y, point2.x, point2.y, distance);

}

float distanceCalc(float x1, float y1, float x2, float y2)
{
	float d;
	d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	return(d);

}