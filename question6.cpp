#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float sensor1 , sensor2, sensor3, sensor4 , sensor5 , sum , average;
	
	printf("enter sensor1:");
	scanf("%f" , &sensor1);
	
	printf("enter sensor2:");
	scanf("%f" , &sensor2);	
	

	printf("enter sensor3:");
	scanf("%f" , &sensor3);	
	
	
	printf("enter sensor4:");
   	scanf("%f" , &sensor4);
	
	printf("enter sensor5:");
	scanf("%f" , &sensor5);
	
	
	sum = sensor1 + sensor2 + sensor3 + sensor4 + sensor5;
	average = sum/5;
	
	printf("average = %.1f\n"  , average);
	return 0;
	
}
