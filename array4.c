#include<stdio.h>
int main()
{
	int size;
	printf("Enter a size of an array\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter Numbers\n");
	for(int i=0;i<size;i++)
	{
	scanf("%d\n",&arr[i]);
	}

	for(int i=0;i<size;i++)
	{
	printf("arr[%d]=%d\n",i,arr[i]);
	}
	
	return 0;
}
