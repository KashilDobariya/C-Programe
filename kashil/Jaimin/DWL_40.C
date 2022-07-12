#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, k=1, sp=40;
	clrscr();
	i=1;
	do
	{
		for(j=1; j<=sp; j++)
			printf(" ");
		for(j=1; j<=i; j++)
		{
			printf("%d ",k++);
		}
		printf("\n");
		sp--;
		i++;
	}while(i<=5);
	getch();
}