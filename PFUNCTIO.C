#include<stdio.h>
#include<conio.h>
void stand(int n)
{
	int i,j,sp=38;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=sp;j++)
			cprintf(" ");
		for(j=0;j<=2;j++)
		{
			cprintf("* ");
		}
		printf("\n");
	}

}
void patten(int n)
{
	int i,j,sp=40,max=15,min=1;
	for(i=0;i<=n;i++)
	{

		for(j=0;j<=sp;j++)
			cprintf(" ");
		for(j=0;j<=i;j++)
		{
			textcolor(rand()%(max-min)+min);
			cprintf("* ");
		}
		printf("\n");
		sp--;
	}
}
void main()
{
	void patten(int);
	clrscr();

	patten(3);
	patten(5);
	patten(7);
	textcolor(6);
	stand(5);
	getch();
}