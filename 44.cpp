#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float battery;
	
	printf("enter battery percentage");
	scanf("%f" , &battery);
	
	if (battery < 20){
	printf("BATTERY IS LOW\n");
	}
	else if (battery < 80){
	    printf("BATTERY IS NORMAL\n");
	}
	else{
		printf("BATTERY IS FULL\n");
	}
	return 0;
}
