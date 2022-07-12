#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, sp=40;
	clrscr();
	i=69;
	while(i>=65)
	{
		j=1;
		while(j<=sp)
		{
			printf(" ");
			j++;
		}

		j=65;
		while(j<=i)
		{
			printf("%c ",j);
			j++;
		}
		printf("\n");
		sp++;
		i--;
	}
	getch();
}