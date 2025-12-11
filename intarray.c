#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	for(int i;i<sizeof(arr)/sizeof(int);i++)
	{
		printf("%d element is %d\n",i+1,arr[i]);
	}
	return 0;
}
