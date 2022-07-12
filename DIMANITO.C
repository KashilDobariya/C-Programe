#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5][5],b[5][5],t,i,j,total=0;
	clrscr();
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf(" Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}

	}
	printf("\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf(" \tEnter b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}

	}

	printf("\n\t-----Matrix A----\t-----Matrix B-----\n");

	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf(" \t%d ",a[i][j]);
		}
		for(j=1;j<=3;j++)
		{
			printf(" \t%d ",b[i][j]);
		}
		printf("\n");
	}
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			t=a[i][j]*b[i][j];
			printf("\n%d*%d=%d",a[i][j],b[i][j],t);
			total+=t;
		}

	}
		printf("\n\t total : %d",total);
	getch();
}