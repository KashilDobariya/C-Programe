#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[10],str2[10];
	clrscr();
	printf(" Enter string 1  : %s");
	gets(str1);

	printf(" Enter string 2  : %s");
	gets(str2);

	printf("\n strcmp : %d",strcmp(str1,str2));
	printf("\n strcmpi : %d",strcmpi(str1,str2));
	getch();
}