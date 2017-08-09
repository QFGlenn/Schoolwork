/*


For this assignment you will write two functions (both pass by reference) and test your functions in main.

Function 1 – This function should return void and take a char*, say ptr. In the body of the function prompt the user for a char (not a string). Set the value ptr points to equal to the user input.

Function 2 – This function should return void and take an int*, say ptr. In the body of the function prompt the user for an integer. Set the value ptr points to equal to the user input.

In main define an int and char variable. Call both functions. Print the values of the two variables after calling the functions. Do NOT use global variables.

NOTE: When using scanf with pointers (values that are already addresses) the address of operator is not needed.



Enter a character: n

Enter a number: 7

The char is n and the int is 7.

*/


#include<stdio.h>

void charPTR(char* ptr);

void intPTR(int* ptr);

int main()
{
	int pointlessInt;
	int* pointedInt;
	int intAddress;
	char charAddress;
	pointedInt = &pointlessInt;
	char pointlessChar;
	char* pointedChar;
	pointedChar = &pointlessChar;

	charPTR(pointedChar);
	intPTR(pointedInt);
	printf("The char is %c and the int is %d\n", pointlessChar, pointlessInt);
	pointedInt = &intAddress;
	pointedChar = &charAddress;
	printf("The address of the char is %p, and the address of the int is %p.\n", &charAddress, &intAddress);
}

void charPTR(char* ptr)
{
	char a;
	printf("Enter a character: ");
	scanf("%c", &a);
	*ptr = a;
	printf("\n");
}

void intPTR(int* ptr)
{
	int a;
	printf("Enter an interger: ");
	scanf("%d", &a);
	*ptr = a;
	printf("\n");
}