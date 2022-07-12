#include <stdio.h>
#include<conio.h>
void main()
 {
    int a,b,c,d,e;
    clrscr();
    printf("enter your salary:");
    scanf("%d",&a);
    if(a<5000)
    {
        b=a*0.08;
        c=a*0.2;
        d=a+b+c;
        printf("\nyour salary:%d",d);
    }
    else if(a>5000 && a<10000)
    {
        b=a*0.12;
        c=a*0.30;
        d=a+b+c;
        printf("\nyour salary:%d",d);
    }
    else if(a>10000 && a<15000)
    {
        b=a*0.15;
        c=a*0.4;
        d=a+b+c;
        printf("\nyour salary:%d",d);
    }
    else if(a>15000 && a<20000)
    {
        b=a*0.2;
        c=a*0.5;
        d=b+c;
        printf("\nyour salary:%d",d);
    }
    getch();
}