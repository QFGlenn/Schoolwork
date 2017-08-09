/*
Assignment 7 Prompt
Write a C program that generates two random numbers.Print both numbers that are generated.
Then use a ternary(or conditional) operator to identify the largest of the 2 numbers and print the result.
Seed the random number generator so the numbers generated are not the same every time.
Submit the.c file only.

Sample Run :

Random 1 : 8809
Random 2 : 27141
The max of 8809 and 27141 is 27141.
*/

#include <stdio.h>
#include <stdlib.h>

int randomNumGenerator();
int findLargest(int b, int c);

int main()
{
	int randInt1 = 0;
	int randInt2 = 0;
	int numberMax = 0;
	srand((unsigned int)time(NULL));
	randInt1 = randomNumGenerator();
	randInt2 = randomNumGenerator();
	numberMax = findLargest(randInt1, randInt2);
	printf("The value of RAND_MAX for this machine is %d.\n", RAND_MAX);

	printf("Random 1 : %d\nRandom 2 : %d\n", randInt1, randInt2);

}

int randomNumGenerator()
{

	return(rand() % RAND_MAX + 1);



}

int findLargest(int a, int b)
{
	int max = a > b ? a : b;
	return(max);

}