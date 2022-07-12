#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=65,sp=40;
	clrscr();
	for(i=65;i<=69;i++)
	{
		for(j=1;j<=sp;j++)
		       printf(" ");
		for(j=65;j<=i;j++)
		{
			if(k<=79)
			{
				printf(" %c",k);
				k++;
			}

		}
		printf("\n");
		sp--;
	}
	getch();
}