#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[10],i;
	clrscr();
	printf(" Enter string : ");
	gets(str);

//	lenght
//	strlen(str);
	printf(" \n string lenght : %d",strlen(str));

//      revers
	strrev(str);
	printf("\n string Revers : %s",str);

//      upper
	strupr(str);
	printf("\n String Uppar : %s",str);

//	lower
	strlwr(str);
	printf("\n String lower : %s ",str);
	getch();
}