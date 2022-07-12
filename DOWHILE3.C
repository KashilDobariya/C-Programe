#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,x=0,x1=1,x2;
	clrscr();
	printf(" Enter n : ");
	scanf(" %d",&n);
	i=0;
	do
	{
	  x2=x+x1;
	  x=x1;
	  x1=x2;
	  printf("\t%d",x2);
	  i++;
	}while(i<=n);
	getch();
}
