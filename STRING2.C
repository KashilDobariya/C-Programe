#include<stdio.h>
#include<conio.h>
void main()
{
	char str[10];
	clrscr();
	printf(" Enter string : ");
	scanf(" %[^\n]",str);

	printf(" string : %s ",str);
	getch();
}
