//SLNRWA
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,p,r,t;
	void intrest(int,int,int,int);
	clrscr();
	printf(" Enter Principal : ");
	scanf("%d",&p);
	printf(" Enter rate of interst : ");
	scanf("%d",&r);
	printf(" Enter number of year : ");
	scanf("%d",&t);
	intrest(i,p,r,t);
	getch();
}
void intrest(int i,int p,int r,int t)
{
	i=(p*r*t)/100;
	printf(" Simpal Intrest : %d",i);
}