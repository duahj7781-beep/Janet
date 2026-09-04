#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float celcius, fahrenheit;
	
	printf("Enter temperature in Celcius: ");
	scanf("%f", &celcius);
	
	fahrenheit = (celcius * 9/5) + 32;
	
	printf("Temperature in Fahrenheit = % 2f\n", fahrenheit);
	return 0;
}
