#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("enter year:");
	scanf("%d",&a);



	if(a%4)
	{
		printf(" not leap year");
	}
	else
	{
		printf(" leap year");
	}
	getch();

}