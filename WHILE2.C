#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf(" Enter n : ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("\t%d",i);
		i*=2;
	}
	getch();
}