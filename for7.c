//
#include<stdio.h>
int main()
#define SIZE 10
{
	/*for(int i=1;i<=4;i++)
	{
		for(int j=4;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	}*/
#ifdef SIZE

	for(int i=0;i<=SIZE*2;i++)
	{
		printf("*");
	}

	for(int j=0;j<=SIZE;j++)
	{
		printf("\n*");
		for(int k=0;k<=(2*SIZE);k++)
		{
			printf(" ");
		}
		printf("*");
	}
	printf("\n");
	for(int i=0;i<=SIZE*2;i++)
	{
		printf("*");
	}
#endif 
	return 0;


}
