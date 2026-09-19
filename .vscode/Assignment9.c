#include <stdio.h>
#include <stdlib.h>
int findlargest(int a, int b, int c);

int main() {
	int a,  b, c, largest;
	
	printf("Enter first number:");
	scanf("%d", &a);
	
	printf("Enter second number:");
	scanf("%d", &b);
	
	printf("Enter third number:");
	scanf("%d", &c);
	
	largest =  findlargest(a, b, c);
	printf("Largest Number = %d\n", largest);
	return 0;
}
int findlargest(int a, int b, int c)
{
	int largest;
	
	if(a >= b && a >= c)
	{
	largest = a;
	}
	else if(b >= a && b >= c)
	{
	largest = b;
	}
	else
	{
		largest = c;
	}
	return largest;
}
