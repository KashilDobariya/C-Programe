//SINRWA
#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,t;
	void intrest(int,int,int);
	clrscr();
	printf(" Enter Principal : ");
	scanf("%d",&p);
	printf(" Enter rate of interst : ");
	scanf("%d",&r);
	printf(" Enter number of year : ");
	scanf("%d",&t);
	intrest(p,r,t);
	getch();
}
void intrest(int p,int r,int t)
{
	printf(" Simpal Intrest : %d",(p*r*t)/100);
}