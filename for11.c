#include<stdio.h>
#define SIZE 5
int main()
{
#ifdef SIZE
	for(int i=0;i<=2*SIZE;i++)
	{
		printf("*");
	}
	printf("\n");

	for(int j=SIZE;j>=0;j--)
	{
		for(int k=j;k<=SIZE;k++)
		{
			printf(" ");
		}
		printf("*");

		for(int l=2*j;l>=0;l--)
		{
			printf(" ");
		}
		printf("*\n");

	}
#endif
	return 0;
}
