#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=1;i<=50;i++)
	{
		if(i%2)

		printf(" %d\t",++i);
	}
	getch();
}