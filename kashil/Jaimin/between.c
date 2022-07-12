#include<stdio.h>
#include<conio.h>
void main()
{
	int x, y;
	clrscr();
	printf("Enter value of X:");
	scanf("%d",&x);
	printf("\nEnter value of y:");
	scanf("%d",&y);
	if(x<2000 || x>3000)
	{
		printf("\n X is : %d",x);
		if(y>100 && y<500)
		{
			printf("\n Y is : %d",y);
		}
	}
	else if(y>100 && y<500)
	{
		printf("\n Y is : %d",y);
	}
	else
	{

		printf("\n Value is invalid");
	}
	getch();
}