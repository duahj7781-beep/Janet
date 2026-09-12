#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numberofstudents;
	int student;
	float score;
	int passed = 0;
	int failed = 0;
	
	printf("How many student?");
	scanf("%d", &numberofstudents);
	
for (student =1 ; student <= numberofstudents; student++)
	{
		do
		{
			printf("Student %d score:", student);
			scanf("%f", &score);
			
			if (score < 0 || score > 100)
			{
				printf("Invalid score. Enter a score between 0 and 100.\n");
			}
		}while (score < 0 || score > 100);
		
		if (score >= 50)
		{
			printf("PASS\n");
			passed++;
		}
		else
		{
			printf("FAIL\n");
			failed++;
		}
	}
	printf("\nPassed: %d\n", passed);
	printf("Failed: %d\n", failed);
	return 0;
}
