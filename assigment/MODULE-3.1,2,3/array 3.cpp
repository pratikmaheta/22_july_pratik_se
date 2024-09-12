#include<stdio.h>
main()
{
	char name[10][5],n,i;
	printf("enter student name  :");
	scanf("%s",&n);
	for(i=0;i<2;i++)
	{
		printf("enter your name  :");
		scanf("%s",&name[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n%name[name]=%s",i,name[i]);
	}

	
}
