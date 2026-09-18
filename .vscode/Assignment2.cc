#include <stdio.h>
#include <stdlib.h>

//FUNCTION DECLARATION
int add(int a, int b)
{
	return (a + b);
}


int main() {
	int a;
	int b;
	
	printf("Enter first number:");
	scanf("%d", &a);
	printf("Enter second number:");
	scanf("%d", &b);
	
	int result = add(a, b);
	printf("Result is: %d\n", result);
	return 0;
}
