#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,x,n;
	clrscr();
	printf(" Enter n : ");
	scanf(" %d",&n);
	i=1;
	do
	{
		x=pow(2,i-1);
		printf("\t%d",x*i);
		++i;
	}while(i<=n);
	getch();
}