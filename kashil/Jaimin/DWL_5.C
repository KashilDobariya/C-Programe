#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	i=1;
	while(i<=50)
	{
		if(i%2)
		printf("\t a : %d",i);
		i++;
	}
	getch();
}