#include<stdio.h>
#include<conio.h>
void main()
{
	char str[10],i;
	clrscr();
	printf(" Enter string :");
	gets(str);
//        scanf("%[^\n]",str);

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i++]+=32;
		}
		else
		{
			str[i++]-=32;
		}
	}
	printf(" \n string : %s",str);
	getch();
}