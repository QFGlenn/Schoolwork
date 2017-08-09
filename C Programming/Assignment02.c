#include <stdio.h>
/* Write a C program that prompts a user for two integers (ints) and stores the two integers
the user types into the console. Print the product, quotient, remainder, sum, and difference 
of the two integers to the console (see below for formatting). Use the first integer the user 
enters and print a statement to the console identifying the number as positive, negative, or 0. 
Only submit the .c file. The format should match the sample runs below.
*/

// I am going to expand on the assignment by allowing the user to decide whether they want to calculate 
// float or int values exclusively. I believe that by stacking if statements I could detect which variables
// are entered and assign them to data types until two numbers are collected, then I could operate on them,
// but it would take too long.


int main()
{ 
	int numberOne;
	int numberTwo;
	int numberType;
	float numeroUno;
	float numeroDos;
	int expressionResultInt;
	float expressionResultFloat;
	int collectedNumbers;

/* I was trying to create nested if statements to allow the user to operate with both int and float. 
   I was not able to compile this code.

	printf("Enter a number: ");
	   scanf("%d %f", &numberOne, &numeroUno);
	   collectedNumbers++;
	   printf("Enter another number: ");
	   scanf("%d %f", &numberTwo, &numeroDos);
	   collectedNumbers++;
	   if (numeroUno=0 && numeroDos=0)
	   {
		   printf("You entered %d and %d.\n", numberOne, numberTwo);
		   expressionResultInt = numberOne * numberTwo;
		   printf("%d * %d = %d\n", numberOne, numberTwo, expressionResultInt);
		   expressionResultInt = numberOne / numberTwo;
		   printf("%d / %d = %d\n", numberOne, numberTwo, expressionResultInt);
		   expressionResultInt = numberOne % numberTwo;
		   printf("%d %% %d = %d\n", numberOne, numberTwo, expressionResultInt);
		   expressionResultInt = numberOne + numberTwo;
		   printf("%d + %d = %d\n", numberOne, numberTwo, expressionResultInt);
		   expressionResultInt = numberOne - numberTwo;
		   printf("%d - %d = %d\n", numberOne, numberTwo, expressionResultInt);
		   if (numberOne < 0)
		   {
			   printf("Your first number, %d, is negative!\n", numberOne);
		   }
		   else
		   {
			   printf("Your first number, %d, is positive!\n", numberOne);
		   }
	   }
	   else if (numberOne = 0 && numberTwo = 0)
	   {
		   scanf("%f %f", &numeroUno, &numeroDos);
		   printf("You entered %.2f and %.2f.\n", numeroUno, numeroDos);
		   expressionResultFloat = numeroUno * numeroDos;
		   printf("%.2f * %.2f = %.2f\n", numeroUno, numeroDos, expressionResultFloat);
		   expressionResultFloat = numeroUno / numeroDos;
		   printf("%.2f / %.2f = %.2f\n", numeroUno, numeroDos, expressionResultFloat);
		   printf("There is no Quotient for Float values! :) \n");
		   expressionResultFloat = numeroUno + numeroDos;
		   printf("%.2f + %.2f = %.2f\n", numeroUno, numeroDos, expressionResultFloat);
		   expressionResultFloat = numeroUno - numeroDos;
		   printf("%.2f - %.2f = %.2f\n", numeroUno, numeroDos, expressionResultFloat);
		   if (numeroUno < 0)
		   {
			   printf("Your first number, %.2f, is negative!\n", numeroUno);
		   }
		   else
		   {
			   printf("Your first number, %.2f, is positive!\n", numeroUno);
		   }
	   }

	*/
	printf("What kinds of numbers would you like to use?\n[Enter (1 for Int) and (2 for Float)]\n\n");
	scanf("%d", &numberType);
	if (numberType <= 1)
	{
		printf("Enter two intergers: ");
		scanf("%d %d", &numberOne, &numberTwo);
		printf("You entered %d and %d.\n", numberOne, numberTwo);
		expressionResultInt = numberOne * numberTwo;
		printf("%d * %d = %d\n", numberOne, numberTwo, expressionResultInt);
		expressionResultInt = numberOne / numberTwo;
		printf("%d / %d = %d\n", numberOne, numberTwo, expressionResultInt);
		expressionResultInt = numberOne % numberTwo;
		printf("%d %% %d = %d\n", numberOne, numberTwo, expressionResultInt);
		expressionResultInt = numberOne + numberTwo;
		printf("%d + %d = %d\n", numberOne, numberTwo, expressionResultInt);
		expressionResultInt = numberOne - numberTwo;
		printf("%d - %d = %d\n", numberOne, numberTwo, expressionResultInt);
		if (numberOne < 0)
		{
			printf("Your first number, %d, is negative!\n", numberOne);
		}
		else
		{
			printf("Your first number, %d, is positive!\n", numberOne);
		}

		
	}
	else
	{
		printf("Enter two floats: ");
		scanf("%f %f", &numeroUno, &numeroDos);
		printf("You entered %.2f and %.2f.\n", numeroUno, numeroDos);
		expressionResultFloat = numeroUno * numeroDos;
		printf("%.2f * %.2f = %.2f\n", numeroUno, numeroDos, expressionResultFloat);
		expressionResultFloat = numeroUno / numeroDos;
		printf("%.2f / %.2f = %.2f\n", numeroUno, numeroDos, expressionResultFloat);
		printf("There is no Quotient for Float values! :) \n");
		expressionResultFloat = numeroUno + numeroDos;
		printf("%.2f + %.2f = %.2f\n", numeroUno, numeroDos, expressionResultFloat);
		expressionResultFloat = numeroUno - numeroDos;
		printf("%.2f - %.2f = %.2f\n", numeroUno, numeroDos, expressionResultFloat);
		if (numeroUno < 0)
		{
			printf("Your first number, %.2f, is negative!\n", numeroUno);
		}
		else
		{
			printf("Your first number, %.2f, is positive!\n", numeroUno);
		}
	}

	// I wanted to see if I could print these results to a file, and found this code, however it doesn't work.
	

	/* FILE *fp;

	fp = fopen("/tmp/test.txt", "w+");
	fprintf(fp, "This is testing for fprintf...\n");
	fputs("This is testing for fputs...\n", fp);
	fclose(fp); */
}