#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],b[10],i,total;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf(" Enetr a[%d] : ",i);
		scanf("%d",&a[i]);
	}

	printf("\n");

	for(i=0;i<5;i++)
	{
		printf(" Enetr b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		printf(" \n a[%d] : %d",i,a[i]);
		printf(" \t b[%d] : %d",i,b[i]);
		total=a[i]+b[i];
		printf(" \t total : %d",total);
	}


	getch();
}