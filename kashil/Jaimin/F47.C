#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sp=40;
	clrscr();
	for(i=69;i>=65;i--)
	{
		for(j=1;j<=sp;j++)
		printf(" ");
		for(j=i;j>=65;j--)
		{
			printf(" %c",j);
		}
		printf("\n");
		sp++;
	}
	getch();
}