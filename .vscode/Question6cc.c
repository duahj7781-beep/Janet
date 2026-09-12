#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float voltage;
	float current;
	float time;
	float power;
	float energy;
	
	printf("Enter voltage:");
	scanf("%f", &voltage);
	
	printf("Enter current:");
	scanf("%f", &current);
	
	printf("Enter time in hours");
	scanf("%f", &time);
	
	power = voltage * current;
	energy = power * time;
	
	printf("\nPower: %.2f W\n", power);
	printf("Energy: %2.f Wh\n", energy);
	return 0;
}
