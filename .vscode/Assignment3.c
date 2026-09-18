#include <stdio.h>
#include <stdlib.h>


int add(int a, int b)
    {
    return(a + b);	
    }  
int subtract(int a, int b)
    {
	return(a - b);
    }
int multiply(int a, int b)
    {
	return(a * b);	
	}
float divide(float a, float b)
	{
	return(a / b);
    }
	

int main() {
	int a;
	int b;
	
	printf("Enter first number:");
	scanf("%d", &a);
	
	printf("Enter second number:");
	scanf("%d", &b);
	
	printf("Addition = %d\n", add(a, b));
	printf("Subtraction = %d\n", subtract(a, b));
	printf("Multiplication = %d\n", multiply(a, b));
	
	if (b != 0)
	{
		printf("Division = %2.f\n", divide(a, b));
	}
	else
	{
		printf("Division by zero is not allowed\n");
	}
	
	return 0;
}
