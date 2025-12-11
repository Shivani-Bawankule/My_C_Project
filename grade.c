#include<stdio.h>
int main()
{
	int sub_1,sub_2,sub_3,sub_4,sub_5,total=0;
	float per;
	printf("Enter the markrs of Hindi Subject:");
	scanf("%d",&sub_1);
	printf("Enter the markrs of English Subject:");
	scanf("%d",&sub_2);
	printf("Enter the markrs of Maths Subject:");
	scanf("%d",&sub_3);
	printf("Enter the markrs of Physics Subject:");
	scanf("%d",&sub_4);
	printf("Enter the markrs of Chemistry Subject:");
	scanf("%d",&sub_5);
	total=sub_1+sub_2+sub_3+sub_4+sub_5;
	per=total*100/500;
	printf("Total Marks: %d\n",total);
	printf("Percentage:%.2f\n", per);
	if(per>30)
	{
		if(per>60)

	{
		printf("Passes with A Grade");

	}
		else

	{
		printf("Passes with B Grade");
	}
	}
	else
	{
		printf("Fail");
	}
	return 0;
}

