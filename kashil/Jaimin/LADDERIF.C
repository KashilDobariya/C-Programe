//nested if
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	printf("enter value of x:");
	scanf("%d",&x);
	printf("enter value of y:");
	scanf("%d",&y);
	printf("enter value of z:");
	scanf("%d",&z);
      /*	if(x>y && x>z)
	{
		printf("x is larger ");
	}
	else
	{
		if(y>z)
		{
			printf("y is larger");
		}
		else
		{
			printf("z is larger");
		}
	}*/
	if(x>y && x>z)//ladder if
	{
		printf("x is larger ");
	}
	else if(y>z)
	{
		printf("y is larger");
	}
	else
	{
		printf("z is larger");
	}
	getch();




}