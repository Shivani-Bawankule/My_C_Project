#include<stdio.h>
int main()
{
	int size;
	printf("Enter a size of an array\n");
	scanf("%d",&size);
	char arr[size];
	printf("Enter Numbers\n");
	for(int i=0;arr[i]!=0;i++)
	{
	scanf(" %c",&arr[i]);
	}

	for(int i=0;arr[i]!=0;i++)
	{
	printf("arr[%p]=%c\n",&arr[0],arr[i]);
	}
	
	return 0;
}
