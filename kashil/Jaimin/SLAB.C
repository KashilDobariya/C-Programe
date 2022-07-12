#include <stdio.h>
#include<conio.h>

void main()
 {
    int a,b,c,d;
    clrscr();
    printf("Enter your income:");
    scanf("%d",&a);
    if(a<=2500)
    {
        printf("Your gross salary is:%drs",a);
    }
    else if(a>2500 && a<=5000)
    {
        b=a*1.1;
        printf("Your gross salary is:%drs",b);
    }
    else if(a>5000 && a<=10000)
    {
        b=a*1.2;
        printf("Your gross salary is:%drs",b);
    }
    else if(a>10000)
    {
        b=a*1.3;
        printf("Your gross salary is:%drs",b);
    }
    getch();
}