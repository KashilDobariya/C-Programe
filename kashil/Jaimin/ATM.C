#include <stdio.h>
#include<conio.h>


void main()
 {
    int a=100000,b,c,d;
    clrscr();
    printf("\nyour blance:%d",a);
    printf("\nwithdrow press '1'and diposite press'2' ");
    scanf("%d",&b);
    if(b==1)
    {
        printf("enter your amount:");
        scanf("%d",&c);
        d=a-c;
        printf("\nyou withdrow :%d",c);
        printf("\nyour net amount:%d",d);
    }
    else if(b==2)
    {
         printf("\nenter your diposite:");
        scanf("%d",&c);
        d=a+c;
         printf("\nyour net amount:%d",d);
    }
    
    getch();
}