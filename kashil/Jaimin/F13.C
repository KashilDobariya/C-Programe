#include<stdio.h>
#include<conio.h>
void main()
{
	int n=10 ,i;
	clrscr();
	for(i=1;i<=n;i++)
	{
		if(i%2)
		{
			printf("%d\t",i);
		}
		else
		{
			printf("%d\t",i*i);
		 }
	 }
	getch();

}


