//SCWRWA
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a;
	int squre(int);
	int cube(int);
	clrscr();
	printf(" Enter a : ");
	scanf("%d",&a);
	printf("\n A Squre : %d",squre(a));
	printf("\n A Cube : %d",cube(a));
	getch();
}
int squre(int a)
{
	return pow(a,2);
}
int cube(int a)
{
	return pow(a,3);
}