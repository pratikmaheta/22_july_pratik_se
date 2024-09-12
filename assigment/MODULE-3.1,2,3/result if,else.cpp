#include<stdio.h>
main()
{
	int english,gujrati,mathes,science,total;
	float pr;
	{
		printf("enter english mark");
		scanf("%d",&english);
		printf("enter gujrati mark");
		scanf("%d",&gujrati);
		printf("enter mathes mark");
		scanf("%d",&mathes);
		printf("enter science mark");
		scanf("%d",&science);
		total=english+gujrati+mathes+science;
		printf("\ntotal:%d",total);
		pr=total/4;
		printf("\npr:%f",pr);
		
		if(pr>=70)
		{
			printf("\nresult:first class");
		}
		else if(pr>=60)
		{
			printf("\nresult:second class");
		}
		else if(pr>=50)
		{
			printf("\nresult:third class");
		}
		else if(pr>=40)
		{
			printf("\nresult:pass");
		}
		else
		{
			printf("\nresult:fail");
		}
	
	}
}
