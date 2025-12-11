#include<stdio.h>
#define SIZE 5
int main()
{
	int i,j,k;
	for(i=0;i<=SIZE;i++)
	{
		printf("*");
		for(j=0;j<=14;j++)
		{
			printf(" ");
		}
		printf("*\n");
	}


	for(k=0;k<=SIZE;k++)
	{
		printf("*");
		for(int l=SIZE;l>=k;l--)
		{
			printf(" ");
		}

		printf("*");

		for(int b=2*k;b>=0;b--)
		{
			printf(" ");
		}
		printf("*");

		for(int a=SIZE;a>=k;a--)
		{
			printf(" ");
		}
		printf("*\n");
	}
	return 0;
}

