#include<stdio.h>
#include<conio.h>
void main()
{
	int  maths,phy,che,total,per ;
	clrscr();
	printf("\enter maths marks ");
	scanf ("%d",&maths);
	printf("\enter phy marks ");
	scanf ("%d",&phy);
	printf("\enter che marks ");
	scanf ("%d",&che);
	total=maths+phy+che;
	printf("\ntotal=%d",total);
	per=total/3;
	printf("\nper=%d",per);
	getch();
	}


