#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=1,sp=40;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=sp;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		{
			printf(" %d",k++);
		}
		printf("\n");
		sp--;
	}
	getch();
}