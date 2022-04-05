#include <stdio.h>

int main(int arc, char *argv[])
{
	float simple_interest;
	float time;
	float rate;
	float principal;

	printf("Enter Principal value here > ");
	scanf("%f",&principal);
	
	printf("Enter rate in percentage value here > ");
	scanf("%f",&rate);

	printf("Enter time here > ");
	scanf("%f",&time);

	simple_interest = principal*rate*time*0.01;
	printf("The simple interest for %0.2f after %0.2f years is %0.2f\n",principal,time,simple_interest);
	return 0 ;	
} 
