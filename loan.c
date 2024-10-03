//program to calculate simple interest
/*
program to calculate simple interest
Authour:Saeed Khalid;
Reg no: CT102/G/22699/24:
Date:28/9/2024:
*/

#include <stdio.h>
int main() {
	
int age ='a';
float income ='i';

printf("please enter your age:");	
	scanf("%d", &age);
	
	printf("please enter your annual income:");
		scanf("%f", &income);
	
	if (age >=21 &income >= 2100) {
	   printf("congratulation! You quality for a loan,\n");
	} else {
		 printf("unfortunately, we are unable to offer you a loan at time.\n");
	}
	
	return 0;
}	