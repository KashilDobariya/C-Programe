#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,d,e,f,x,g;
	clrscr();
	printf("enter unit:");
	scanf("%f",&x);
	if(x<=100)
	{
			a=(x*0.6)+50;
			printf("your bill amount :%f",a);
	}
	else if (x>100 && x<=300)
	{
		 b=x-100;
		 c=(b*0.8)+110;
		printf("your bill amount:%f",c );
	}
	else if (x>300)
	{
		     e=x-300;
		     f=(e*0.9)+270;
		     if(f<=300)
		     {
			 printf("your bill amount is :%f",f);
		     }
		     else
		     {
			g=f*1.15;
			printf("your bill amount is :%f",g);
		     }
	}

	getch();
 }



