#include<stdio.h>
#include<conio.h>
void main()
{
	char str[10][10],i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf(" Enter string : ");
		gets(str[i]);
	}
		printf("\n-----Name-----\n");
	for(i=0;i<5;i++)
	{
		printf("\n");
		puts(str[i]);

	}
	getch();
}