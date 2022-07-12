#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,d,e;
	clrscr();
	printf("enter a:");
	scanf("%f",&a);
	printf("\nenter b:");
	scanf("%f",&b);
	c=a*b;
	printf("\nyour bill:%f",c);
	d=c*0.9;
	printf("\nwith dis:%.2f",d);
	e=d*1.18;
	printf("\nwith gst:%.2f",e);
	getch();

}
