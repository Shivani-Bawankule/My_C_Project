#include<stdio.h>
int main()
{
	int array1[20][20];
	int array2[20][20];
	int mul[20][20];
	int r, c;

	printf("Enter a size of row\n");
	scanf("%d", &r);
	printf("Enter a size of column\n");
	scanf("%d", &c);

	printf("Enter a 1st Matrix\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d", &array1[i][j]);
		}
		printf("\n");
	}


	printf("Enter a 2nd Matrix\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d", &array2[i][j]);
		}
		printf("\n");
	}

	printf("Multiplication of two matrix\n");
	if(r==c)
	{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			mul[i][j]=0;
				for(int k=0;k<c;k++)
				{

					mul[i][j]=mul[i][j]+array1[i][k]*array2[k][j];
				}
		}
	}
	}

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d\t", mul[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
