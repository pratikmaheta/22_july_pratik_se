#include<stdio.h>
float pi=3.14;
main()
{
	int a,b;
	printf("enter number 1:");
	scanf("%d",&a);
	printf("enter number 2:");
	scanf("%d",&b);
	printf("\nadd:%d",a+b);
	printf("\nmul:%d",a*b);
	printf("\nsub:%d",a-b);
	float r,area;
	printf("\n\nenter value of r");
	scanf("%f",&r);
	area=pi*r*r;
	printf("\narea of circle %f",area);
	
}
