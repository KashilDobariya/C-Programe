//SIWRWA
#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,t;
	int intrest(int,int,int);
	clrscr();
	printf(" Enter Principal : ");
	scanf("%d",&p);

	printf(" Enter rate of interst : ");
	scanf("%d",&r);

	printf(" Enter number of year : ");
	scanf("%d",&t);

	printf(" Simpal Intrest : %d",intrest(p,r,t));
	getch();
}
int intrest(int p,int r,int t)
{
	return (p*r*t)/100;
}