#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	i=1;
	do
	{
		printf("%d\t ",i*i);
		i++;
	} while(i<=n);
	getch();
}