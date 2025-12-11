#include<stdio.h>
int main()
{
	int i,j;
	/*for(i=0;i<=10;i++)
	{
		printf("*\n");
	for(j=i;j>=0;j--)
	{
		printf("*");
	}
	}*/

	for(i=0;i<=10;i++)
	{
		printf("*\n");
	for(j=i;j>=0;j--)
	{
		printf(" ");
	}	
	printf("*\n");
	for(int k=i;k<=j;k++)
	{
		printf("*");
	}
	}
	return 0;

}

