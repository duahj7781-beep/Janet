#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float power , voltage , current;
	
	printf("enter voltage value");
	scanf("%f" , &voltage);
	
	printf("enter current value");
	scanf("%f", &current);
	
	power = current * voltage ;
	
	printf("power = %.2f W\n" , power);
	
	return 0;
}
