#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,b,c;
	clrscr();
	printf(" Enter a : ");
	scanf("%d",&a);
	printf(" Enter b : ");
	scanf("%d",&b);
	printf(" Enter c : ");
	scanf("%d",&c);


	for(i=1;i<=10;i++)
	{
		printf("\n%d*%d=%d",a,i,i*a);
		printf("\t\t%d*%d=%d",b,i,i*b);
		printf("\t\t%d*%d=%d",c,i,i*c);
	}
	getch();
}