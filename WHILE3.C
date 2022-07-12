#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	i='A';
	while(i<='Z')
	{
		printf("\t%c",i++);
		i++;
	}
	getch();
}