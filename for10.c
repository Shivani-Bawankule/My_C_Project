#include<stdio.h>
#define SIZE 5
int main()
{
	for(int p=0;p<=SIZE+1;p++)
	{
	printf(" ");
	}
	printf("*\n");	

	for(int i=0;i<=SIZE;i++)
	{
		for(int j=i;j<=SIZE;j++)
		{
			printf(" ");
		}
		printf("*");

		for(int l=2*(i+1);l>=1;l--)
		{
			printf(" ");
		}
		printf("*\n");
		//for(int k=i;k<=5;k++)
		//{
	//		printf("\n");
	//	}
		
	}

		for(int m=0;m<=2*SIZE;m++)
		{
			printf("*");
		}
	return 0;
}
