//SL WRWA
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,p,r,t;
	int intrest(int,int,int,int);
	clrscr();
	printf(" Enter Principal : ");
	scanf("%d",&p);

	printf(" Enter rate of interst : ");
	scanf("%d",&r);

	printf(" Enter number of year : ");
	scanf("%d",&t);

	i=(p*r*t)/100;

	printf(" Simpal Intrest : %d",intrest(i,p,r,t));
	getch();
}
int intrest(int i,int p,int r,int t)
{
	return i;
}