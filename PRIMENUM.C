#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,k=0,p=0;
	clrscr();
	printf(" Enter Number : ");
	scanf("%d",&n);
	k=n/2;
	for(i=2;i<=k;i++)
	{
		if(n%i==0)
		{
			printf("Number is not Prime");
			p=1;
			break;
		}
	}
	if(p==0)
	printf("Number is Prime");
	getch();
}