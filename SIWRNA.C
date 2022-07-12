//SL WRNA
#include<stdio.h>
#include<conio.h>
void main()
{
	int intrest();
	clrscr();
	printf("\n Simpal Intrest : %d",intrest());
	getch();
}
int intrest()
{
	int i,p,r,t;
	printf(" Enter Principal : ");
	scanf("%d",&p);
	printf(" Enter rate of interst : ");
	scanf("%d",&r);
	printf(" Enter number of year : ");
	scanf("%d",&t);
	i=(p*r*t)/100;
	return i;
}