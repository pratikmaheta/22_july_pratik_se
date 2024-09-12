#include<stdio.h>
main()
{
	int id[7],n,i;
	printf("enter number of student   :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter your id number  :");
		scanf("%d",&id[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n%id[%d]=%d",i,id[i]);
	}
	
	
}
