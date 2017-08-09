/* This is Assignment 1. I am Glenn Lusk. Assignment prompt as follows.

Write a C program that prints your name, CS classes taken, and the date on separate lines. Use one variable each for the month, day, and year (3 total). 

Only submit the .c file. It will be in the project folder and will likely be named main.c or Source.c.

e.g.

My name is Steven Allbee

I have taken C Programming.

Today's date is 8/27/16.

*/

#include <stdio.h>

int main()
{
	char char1 = 74;
	char char2 = 117;
	char char3 = 110;
	char char4 = 101;
	int month = 06;
	int day = 20;
	int year = 2017;
	printf("My name is Glenn Lusk\nI have taken CS38 Java Programming and IMA20 Game Story Design\nToday's Date is %d/%d/%d ",
		month, day, year);
	printf("\nIn other words, the month of the year is %c%c%c%c", char1, char2, char3, char4);
	printf("\n");
	return 0;
}