/*
Write a program that prompts and gets two strings from the user (no spaces will be entered). Compare the two strings and print a statement to the console stating whether the two strings are equal.

Sample Run 1

Enter a string: hello

Enter a string: world

hello is not equal to world



Sample Run 2

Enter a string: hello

Enter a string: hello

hello is equal to hello
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define NAME_SIZE 13
#define NAME_COUNT 2


void getString(char* str);

int main()
{
	char strings[NAME_COUNT][NAME_SIZE];
	//get the string
	//printf("Enter a string: ");
	//fgets(string1, 30, stdin);
	//printf("\nEnter another string: ");
	//fgets(string1, 30, stdin);
	bool theSame;
	
	int i;

	for (i = 0; i < NAME_COUNT; i++)
	{
		
		getString(strings[i]);

	}
	
	theSame = strcmp(strings[0], strings[1]) ? 1 : 0;
	if (theSame == 0)
	{
		printf("\nThese strings, %s and %s, are identical\n", strings[0], strings[1]);
	}
	else
	{
		printf("\nThese strings, %s and %s, are different.\n", strings[0], strings[1]);
	}
}

void getString(char* str)
{
	printf("Enter a string: ");
	fgets(str, NAME_SIZE, stdin);
	str[strlen(str) - 1] = '\0';
}