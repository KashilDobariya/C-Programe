#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, sp=40;
	clrscr();
	i=5;
	while(i>=1)
	{
		j=1;
		while(j<=sp)
		{
			printf(" ");
			j++;
		}
		j=1;
		while(j<=i)
		{
			printf("%d ",i);
			j++;
		}
		printf("\n");
		sp++;
		i--;
	}
	getch();
}