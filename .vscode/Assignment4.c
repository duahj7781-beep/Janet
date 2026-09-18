#include <stdio.h>
#include <stdlib.h>
void checkEvenOdd(int number);

int main() {
	 int number;
	 
	 printf("Enter a number:");
	 scanf("%d", &number);
	 
	 checkEvenOdd(number);
	return 0;
}

void checkEvenOdd(int number)
{
	if (number % 2== 0)
	{
		printf("%d is even number.\n", number);
	}
	else
	{
		printf("%d is odd number.\n", number);	
	}
}
