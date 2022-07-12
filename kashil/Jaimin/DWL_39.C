#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, k=1, sp=40;
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
		}
		printf("\n");
		sp++;
		i--;
	}
	getch();
}