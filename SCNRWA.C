//SCNRWA
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,s,c;
	void squre(int,int);
	void cube(int,int);
	clrscr();
	printf(" Enter a :");
	scanf("%d",&a);

	squre(a,s);
	cube(a,c);
	getch();
}
void squre(int a,int s)
{
	s=pow(a,2);
	printf("\n A Squre : %d",s);
}
void cube(int a,int c)
{
	c=pow(a,3);
	printf("\n A Cube : %d",c);
}