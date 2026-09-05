#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float resistance1 , resistance2 , resistance3;
	
	printf("enter resistances1 value");
	scanf("%f" , &resistance1);
	
	printf("enter resistance2 value");
	scanf("%f" , &resistance2);
	
	printf("enter resistance3 value");
	scanf("%f" , &resistance3);
	
	if (resistance1 >= resistance2 && resistance1 >= resistance3){
		printf("resistance1 is the largest");
	}	
	
	
    else if (resistance2 >= resistance1  && resistance2 >= resistance3){
    	printf("resistance2 is the largest\n");
	}
	
	else {
		printf("resistance3 is the largest\n");
	}

	
	
	
	
	return 0;
}
