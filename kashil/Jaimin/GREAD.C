#include <stdio.h>
#include<conio.h>

void main() {
    int a ,b,c,d,e;
    clrscr();
    printf("enter youe phy mark");
    scanf("%d",&a);
     printf("enter youe mat mark");
    scanf("%d",&b);
     printf("enter youe che mark");
    scanf("%d",&c);
    d=a+b+c;
    e=d/3;
    printf("your per:%d",e);
    if(e>75)
    {
        printf("\nyour gread 'a'");
    }
    else if(e<75 && e>60)
    {
        printf("\nyour gread 'b'");
    }
    else if(e<60 && e>45)
    {
        printf("\nyour gread 'c'");
    }
    else if(e<45 && e>35)
    {
        printf("\nyour gread 'd'");
    }
    else if(e<35)
    {
        printf("\n'opppps bettar luck next time  you are fail'");
    }
    getch();

}