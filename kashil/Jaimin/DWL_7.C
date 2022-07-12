#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	i=1;
	while(i<=50)
	{
		if(i%2)
	       {
			printf(" %dis odd\t",i);
			i++;
	       }
	       else
	       {
			printf("%dis even\t",i);
	       }         i++;
	}
	getch();
}