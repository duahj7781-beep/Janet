#include <stdio.h>
#include <stdlib.h>


int main() {
	int age;
	int studentID;
	float examinationscore;
	
	
	printf(" Enter your age:");
	scanf("%d", &age);
	
	printf("Enter your studentID:");
	scanf("%d", &studentID);

	printf(" Enter your examinationscore:");
	scanf("%2f", &examinationscore);

	printf("\nsummery\n");
	printf("Age: %d\n", age);
	printf("StudentID: %d\n", studentID);
	printf("Score: %.2f\n", examinationscore);
	
	return 0;
}
