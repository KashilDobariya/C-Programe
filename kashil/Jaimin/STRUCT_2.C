#include<stdio.h>
struct student
{
	int Roll;
	char name[20];
	int m, p, c, per, total, gread;
};
int main()
{
	struct student a[3];
	int i;
	for(i=0; i<2; i++)
	{
		a[i].Roll=i+1;
		printf("Enter the details of Student %d\n",a[i].Roll);
		printf("Enter the name : ");
		scanf("%s",a[i].name);
		printf("Enter the Math :");
		scanf("%d",&a[i].m);
		printf("Enter the Physic :");
		scanf("%d",&a[i].p);
		printf("Enter the Chemistry :");
		scanf("%d",&a[i].c);
	}
	printf("The Student details are\n");
	printf("\nRoll\tName\tMath\tPhysic\tChemistry\tTotal\tGrade\n");
	for(i=0; i<3; i++)
	{
		a[i].total=a[i].m + a[i].p + a[i].c;
		a[i].per=a[i].total/3;
		if(75>=a[i].per)
			printf("A");
		else if(a[i].per>=60 && a[i].per<75)
		{
			printf("B\n");
		}
		else if(a[i].per>=45 && a[i].per<60)
		{
			printf("C\n");
		}
		else if(a[i].per>=35 && a[i].per<45)
		{
			printf("D\n");
		}
		else
		{
			printf("Fail");
		}
		printf("%d\t%s\t\t%d\n",i+1,a[i].name,a[i].m,a[i].p,a[i].c,a[i].total,a[i].per,a[i].gread);
	}
	return 0;
}