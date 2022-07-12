//SINRNA
#include<stdio.h>
#include<conio.h>
void main()
{
	void intrest();
	clrscr();
	intrest();
	getch();
}
void intrest()
{
	int p,r,t;
	printf(" Enter Principal : ");
	scanf("%d",&p);
	printf(" Enter rate of interst : ");
	scanf("%d",&r);
	printf(" Enter number of year : ");
	scanf("%d",&t);

	printf(" Simpal Intrest : %d",(p*r*t)/100);
}