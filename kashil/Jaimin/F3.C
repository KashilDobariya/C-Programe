#include<stdio.h>
#include<conio.h>
void main()
{
	int i, a;
	clrscr();
	printf("enter number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		printf("\n a : %d",i);
	}
	getch();
}