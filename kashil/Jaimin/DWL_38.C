#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, k=1, sp=40;
	clrscr();
	i=1;
	do
	{
		j=1;
		do
		{
			printf(" ");
			j++;
		}while(j<=sp);

		j=1;
		do
		{
			if(k%2)
			{
				printf("%d ",1);
			}
			else
			{
				printf("%d ",0);
			}
			k++;
			j++;
		}while(j<=i);
		printf("\n");
		sp--;
		i++;
	}while(i<=5);
	getch();
}