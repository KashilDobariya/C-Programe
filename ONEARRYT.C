#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,total=0;
	clrscr();
	for(i=1;i<=5;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=1;i<=5;i++)
	{
		total+=a[i];
	}
	printf(" total : %d",total);
	getch();
}
