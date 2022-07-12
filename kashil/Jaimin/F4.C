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
	for(i=++a;i<b;i++)
	{
		printf("\n a : %d",i);
	}
	getch();
}