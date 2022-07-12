//WRNA
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	int dosum();
	clrscr();
//	n=dosum();
//  	printf("\n Sum : %d",n);
	printf("\n Sum : %d",dosum());
	getch();
}
int dosum()
{
	int a,b;
	printf(" Enter a : ");
	scanf("%d",&a);

	printf(" Enter b : ");
	scanf("%d",&b);
	return a+b;
}