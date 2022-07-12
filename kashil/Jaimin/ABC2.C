#include<stdio.h>
#include<conio.h>
void main()
{
	char ch,i;
	clrscr();
	for(ch=65;ch<=90;ch++)
	{
		if(ch%3==0)
		printf("%c",ch);
		else if(ch%3==1)
		printf("%c",ch);
		else if(ch%3==2)
		printf("\n%c",ch);

	}
	getch();

}