#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[5]={12,10,56,45,19};
	int *p=a;
	int i;
	printf("Arry Elements---\n");
	printf("\nVAlue\taddress\n");
	printf("----------------\n");
	for(i=0;i<5;i++)
       {
		printf("\n%d\t%u",*(p+i),(p+i));
       }
       getch();
}