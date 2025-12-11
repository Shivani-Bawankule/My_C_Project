#include<stdio.h>
int main()
{
	int array1[20][20]={{5,2},{9,1}};
	int array2[20][20]={{6,2},{4,2}};
	int mul[20][20];
	int r, c;
	int a=0,b=0;

	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
		{
			if(i!=j) continue;
			 a=array1[i][j]*array2[i][j];
			 printf("a=%d\n",a);
		}
		
			if(i!=j)		
			{
		       	b=array1[i][j]*array2[i][j];
			printf("1=%d\n", array1[i][j]);
			printf("2=%d\n", array2[i][j]);
			printf("b=%d\n",b);
			}
		}
	}

	//for(int i=0;i<2;i++)
	//{
	//	for(int j=0;j<2;j++)
	//	{
			mul[0][0]=a+b;
			printf("%d\t", mul[0][0]);
//		}
//		printf("\n");
//	}
	
	
	return 0;
}
