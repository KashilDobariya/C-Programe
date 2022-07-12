#include<stdio.h>
#include<conio.h>
void main()
{
	void myfun();	//functoin declartion
	clrscr();
	printf("\n Before function");
	myfun();	//function calling
	printf("\n After function");
	getch();
}
void myfun()        //finction defination
{
	printf("\n\t Inside my function");
}