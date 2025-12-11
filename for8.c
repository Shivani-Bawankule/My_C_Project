#include<stdio.h>
#define SIZE 10
int main()
{
	printf("*\n");
	for(int i=1;i<=SIZE;i++)
	{
		printf("*");
		for(int j=i;j>=0;j--)
		{
			printf(" ");
		}
		printf("*\n");
	}
	printf("\n");
	for(int k=4;k<=SIZE;k++)
	{
		printf("* ");
	}
	return 0;
}

