//WRWA
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a,b;
	int dosum(int,int);
	clrscr();
	printf(" Enter a : ");
	scanf("%d",&a);

	printf(" Enter b : ");
	scanf("%d",&b);

//	n=dosum();
//  printf("\n Sum : %d",n);
	printf("\n Sum : %d",dosum(a,b));
	getch();
}
int dosum(int a,int b)
{
	return a+b;
}