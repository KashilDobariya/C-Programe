#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	for(ch=65;ch<=90;ch++)
	{
		if(ch%3==1)
		{
			printf("%c\n",ch);
		}
		else
		{
			printf("%c",ch);
		}
	}
	getch();

}
