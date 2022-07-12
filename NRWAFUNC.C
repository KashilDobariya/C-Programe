#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	void dosum(int,int); //declartion
	clrscr();

	printf(" Enter a : ");
	scanf("%d",&a);

	printf(" Enter b : ");
	scanf("%d",&b);

	dosum(a,b);	      //calling
	getch();
}
void dosum(int x,int y)	     //defination
{
	printf("\n Sum : %d",x+y);
	printf("\n Multi : %d",x*y);
}
