#include <stdio.h>

int main(int arc, char *argv[])
{
	float simple_interest;
	float time;
	float rate;
	float principal;

	printf("!! INSTRUCTIONS FOR USE\n 1. Provide the Principal\n 2.Provide the rate as percentage value\n 3.Provide time in years\n ");

	start: printf("Enter Principal value here > ");
	scanf("%f",&principal);
	
	printf("Enter rate in percentage value here > ");
	scanf("%f",&rate);

	printf("Enter time here > ");
	scanf("%f",&time);

	if (principal<0||rate<0||time<0)
	{
		printf("please provide real values only\n");
		goto start;
	}
	

	simple_interest = principal*rate*time*0.01;
	if(simple_interest < 0 ){printf("check your values carefully because the interest cannot be negative");}
	else{printf("The simple interest for %0.2f after %0.2f years is %0.2f\n",principal,time,simple_interest);};
	return 0 ;	
} 
