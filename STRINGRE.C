#include<stdio.h>
#include<conio.h>
void main()
{
	char str[10],str1;
	int i,left,right,len;
	clrscr();
	printf(" Enter string : ");
	gets(str);

	for(i=0;str[i]!='\0';i++);
	len=i;

	left=0;
	right=len-1;

	for(i=left;i<=right;i++)
	{
		str1=str[i];
		str[i]=str[right];
		str[right]=str1;
		right--;
	}

	printf(" \n Revers string : %s",str);
	getch();
}