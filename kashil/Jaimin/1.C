#include<stdio.h>
#include<conio.h>
void main()
{
	int a ,b;
	clrscr();
	printf("enter value a:");
	scanf ("%d",&a);
	if(a<100)
	{
		printf("smaller then 100");
	}
	else
	{
		printf("larger then 100");
	}
	getch();
}