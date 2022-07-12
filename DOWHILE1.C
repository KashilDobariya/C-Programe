#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf(" Enter n : ");
	scanf("%d",&n);
	i=1;
	do
	{
		printf("\t%d",i++);
		printf("\t%d",i*i);
		i++;
	}while(i<=n);
	getch();
}