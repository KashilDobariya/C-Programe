#include<stdio.h>
#include<conio.h>
void main()
{
	char str[10];
	int i;
	clrscr();

	printf(" Enter string : ");
	gets(str);

	for(i=0;str[i]!='\0';i++);
	printf("\n Length : %d",i);
	getch();
}