#include<stdio.h>
main()
{
	int a,b,choice;
	printf("enter number 1:");
	scanf("%d",&a);
	printf("enter number 2:");
	scanf("%d",&b);
	
	printf("\n1:add");
	printf("\n2:sub");
	printf("\n3:mul");
	printf("\n4:div");
	printf("\nplz select any option!");
	scanf("%d",&choice);
	 if(choice>=a,b)
	{
		printf("\nadd:%d",a+b);
		printf("\nsub:%d",a-b);
		printf("\nmul:%d",a*b);
		printf("\ndiv:%d",a/b);
	
	}
}
