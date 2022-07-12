#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100],i=0;
	clrscr();
	printf(" Enter string :");
	gets(str);

//        scanf("%[^\n]",str);

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]+=32;
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			str[i]-=32;
		}
	}
	printf("\nstring : %s",str);
	getch();
}