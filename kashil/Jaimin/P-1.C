#include<stdio.h>
#include<conio.h>
void main()
{
	int  maths= 90, phy=77, che=69,total ;
	float per;
	clrscr();
	printf ("\nmaths=%d,\nphy=%d,\nche=%d",maths ,phy ,che);
	total=maths+phy+che;
	printf("\ntotal=%d",total);
	per=total/3;
	printf ("\nper=%.2f",per);
	getch();
}