#include<stdio.h>
#include<conio.h>
void main()
{
	char str[10][10];
	int  std[5],math[5],eng[5],phy[5],i,total[5],pr[5],grade,w=36;
	clrscr();
	for(i=1;i<=5;i++)
	{
		printf("Student no : %d ",i);

		printf("\n Enetr Name : ");
		scanf("%s",str[i]);

		printf("\t Maths marks : ");
		scanf("%d",&math[i]);

		printf("\t Eng marks : ");
		scanf("%d",&eng[i]);

		printf("\t Phy marks : ");
		scanf("%d",&phy[i]);

	}
	printf("Student\tname\tMath\tEng\tPhy\tTotal\tPersnt\tGrade\tScolership");

	for(i=1;i<=5;i++)
	{

		printf("\n[%d]",i);

		printf("\t%s",str[i]);

		printf("\t%d",math[i]);
		printf("\t%d",eng[i]);
		printf("\t%d",phy[i]);

	if(math[i]<=35 || eng[i]<=35 || phy[i]<=35)
	{
		pr[i]=0;
	}
	else
	{
		total[i]=math[i]+eng[i]+phy[i];
		printf("\t%d",total[i]);

		pr[i]=total[i]*100/300;
		printf("\t%d",pr[i]);
	}

		if(pr[i]>35 && pr[i]<=50)
		{
			printf("\tC");
		}
		else if(pr[i]>50 && pr[i]<=75)
		{
			printf("\tB");
		}
		else if(pr[i]>75 && pr[i]<=100)
		{
			printf("\tA");
			printf("\t 100%c",w);
		}
		else
		{
			printf("\tFail");
		}
		printf("\t");
	}
	getch();
}