#include<stdio.h>
main()
{
	float p,r,t,si;
	printf("enter value of principal amount:");
	scanf("%f",&p);
	printf("enter the rate of intrest:");
	scanf("%f",&r);
	printf("enter the time duration:");
	scanf("%f",&t);
	
	si=(p*r*t)/100;
	printf("the simple intrest is %f",si);
}

