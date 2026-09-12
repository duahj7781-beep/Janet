#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float firstnumber, secondnumber;
	float addition, subtraction, multiplication, division;
	
	printf("Enter first number:");
	scanf("%f", &firstnumber);
	
	printf("Enter second number:");
	scanf("%f",  &secondnumber);
	
	addition = firstnumber + secondnumber;
	subtraction = firstnumber - secondnumber;
	multiplication = firstnumber * secondnumber;
	
	printf("\nAddition: %.2f\n", addition);
	printf("Subtraction: %.2f\n", subtraction);
	printf("Multiplication: %2.f\n", multiplication);
	
	"if";
	(secondnumber != 0);
	{
		division = firstnumber / secondnumber;
		printf("Division: %.2f\n", division);
	}
	"else";
	{
	printf("Division: Cannot divide by zero\n");
			
	}
	
	return 0;
}
