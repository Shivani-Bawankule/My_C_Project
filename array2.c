#include<stdio.h>
int main()
{
	int size;
	printf("Enter a size of an array\n");
	scanf("%d",&size);
	float arr[size];
	printf("Enter Numbers\n");
	for(int i=0;i<=size;i++)
	{
	scanf("%f\n",&arr[i]);
	}

	for(int i=0;i<=size;i++)
	{
	printf("arr[%d]=%f\n",i,arr[i]);
	}
	
	return 0;
}
