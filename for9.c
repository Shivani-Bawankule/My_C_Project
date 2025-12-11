#include<stdio.h>
#define SIZE 10
int main()
{
	for(int i=0;i<=SIZE;i++)
	{
		for(int j=i;j<=SIZE;j++)
		{
			printf(" ");
		}
		printf("*");
		for(int l=i;l>=0;l--)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for(int k=0;k<=SIZE;k++)
	{
		printf("*");
	}
	return 0;
}


