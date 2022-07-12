#include<stdio.h>
#include<conio.h>
void main()
{
	void dosum();	//declartion
	clrscr();
	dosum();        //calling
	getch();
}
void dosum()	       //defination
{
	int a,b;
	printf(" Enter a : ");
	scanf("%d",&a);

	printf(" Enter b : ");
	scanf("%d",&b);

	printf("\n Sum : %d",a+b);
}