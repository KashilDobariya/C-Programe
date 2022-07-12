#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,i;
	clrscr();
	printf("enter number:");
	scanf("%d",&a);
	printf("enter number:");
	scanf("%d",&b);
	i=a;
	do
	{
		printf("\n a : %d",i);
		i++;
	} while(i<=b);
	getch();
}