#include<stdio.h>
union stdinfo
{
	int id,mark;
	char name[10],sub[10];
}st[10];

main()
{
	int n,i;
	printf("enter number of student :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		
	printf("enter an id :");
	scanf("%d",&st[i].id);
	printf("enter a mark :");
	scanf("%d",&st[i].mark);
	printf("enter name of student :");
	scanf("%s",&st[i].name);
	printf("enter a subject  :");
	scanf("%s",&st[i].sub);
	
	}
	for(i=0;i<n;i++)
	{
	printf("\nid[%d]=%d",i,st[i].id);
	printf("\nmark[%d]=%d",i,st[i].mark);
	printf("\nname[%d]=%s",i,st[i].name);
	printf("\nsub[%d]=%s",i,st[i].sub);
	
		}	

}
