#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[10],str2[10];
	clrscr();
	printf(" Enter string 1  : %s");
	gets(str1);

	strcpy(str2,str1);

	printf("\n str1 : %s",str1);
	printf("\n str2 : %s",str2);
	getch();
}