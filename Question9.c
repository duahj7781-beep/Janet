#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int number;
	int counter;
	
	printf("Enter number:");
	scanf("%d", &number);
	
	for (counter = 1; counter <= 12; counter++)
	{
		printf("%d x %d = %d\n", number, counter, number* counter);
	}
	
	
	return 0;
}
