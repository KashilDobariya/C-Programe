#include<stdio.h>
#include<conio.h>
void main()
{
	int i, a;
	clrscr();
	printf("enter number:");
	scanf("%d",&a);
	i=1;
	while(i<=a)
	{
		printf("\n a : %d",i);
		i++;
	}
	getch();
}