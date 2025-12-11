#include<stdio.h>
int main()
{
	int array1[4][4]={{1,2,3,4},{5,6,7,8},{1,1,1,1},{1,1,1,1}};
	int array2[4][4]={{9,10,11,12},{13,14,15,16},{2,2,2,2},{2,2,2,2}};
	int sum[4][4];

	for(int i=0;i<=3;i++)
	{
		for(int j=0;j<=3;j++)
		{
			sum[i][j]=array1[i][j]+array2[i][j];
		}
	}

	for(int i=0;i<=3;i++)
	{
		for(int j=0;j<=3;j++)
		{
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
