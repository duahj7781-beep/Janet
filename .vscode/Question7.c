#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float examinationscore;
	
	printf("Enter examinationscore:");
	scanf("%f", &examinationscore);
	
	if (examinationscore < 0 || examinationscore > 100)
	{ 
	printf("Result: Invalid examinationscore\n");
	}
	else if  (examinationscore >= 50)
	{
	printf("Result: PASS\n");
	}
	else
	{ 
	printf("Result: FAIL\n");
	}

	
	return 0;
}
