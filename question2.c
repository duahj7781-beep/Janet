#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float (voltage);
	
	printf("enter voltage value:");
	scanf("%f" , &voltage);
	
	if (voltage > 50) {
    	printf("OVERCURRENT WARNING\n");
}

	else{
	   printf("NORMAL\n");
}
	
	return 0;
}
