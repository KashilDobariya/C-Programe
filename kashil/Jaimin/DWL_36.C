#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, sp=40;
	clrscr();
	i=65;
	do
	{
		j=1;
		do
		{
			printf(" ");
			j++;
		}while(j<=sp);

		j=65;
		do
		{
			printf("%c ",j);
			j++;
		}while(j<=i);

		printf("\n");
		sp--;
		i++;
	}while(i<=69);
	getch();
}