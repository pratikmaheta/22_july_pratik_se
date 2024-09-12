#include<stdio.h>
main()
{
	int a,b;
	printf("value of A is %d",a);
	scanf("%d",&a);
	printf("value of B is %d",b);
	scanf("%d",&b);
	printf("\nadd of A+B=%d",a+b);
	printf("\nsub of A-B=%d",a-b);	

	if(a+b)
	{
		printf("number is positive");
	}
	else
	{
		printf("number is negative");
	}
}
