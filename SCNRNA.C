//SCNRNA
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	void squre(),cube();
	clrscr();
	squre();
	cube();
	getch();
}
void squre()
{
	int a,squre;
	printf(" Enter a : ");
	scanf("%d",&a);
	squre=pow(a,2);
	printf("\n A Squre : %d",squre);
}
void cube()
{
	int a,cube;
	cube=pow(a,3);
	printf("\n A Cube : %d",cube);
}