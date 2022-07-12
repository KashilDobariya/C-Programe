//SCWRNA
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int squre();
	int cube();
	clrscr();
	printf("\n A Squre : %d",squre());
	printf("\n A Cube : %d",cube());
	getch();
}
int squre()
{
	int a,s;
	printf(" Enter a : ");
	scanf("%d",&a);
	s=pow(a,2);
	return s;
}
int cube()
{
	int a,c;
	printf("\n Enter a : ");
	scanf("%d",&a);
	c=pow(a,3);
	return c;
}