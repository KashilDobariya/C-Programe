#include<stdio.h>
#include<conio.h>
void main()
{
	char ch,a;
	clrscr();
	for(ch=66;ch<=90;ch+=3)
	{
		printf("%c\t%c\t%c\n",ch-1,ch,ch+1);

	}
	getch();

}