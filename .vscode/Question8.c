#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float score;
	char grade;
	
	printf("Enter score:");
	scanf("%f", &score);
	
	if (score < 0 || score > 100)
	{
		printf("Invalid score\n");
	}
	else if (score >= 80)
	{
		grade = 'A';
	}
		else if (score >= 70)
	{
		grade = 'B';
	}
		else if (score >= 60)
	{
		grade = 'C';
	}
		else if (score >= 50)
	{
		grade = 'D';
	}
	else
	{
		grade ='F';
	}
	if (score >= 0 && score <= 100)
	{
		printf("Score: %.0f\n", score);
		printf("Grade: %c\n", grade);
	}
	
	return 0;
}
