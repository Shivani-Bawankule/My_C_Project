#include<stdio.h>
int main()
{
	int arr[]={10,20,30};
	int a=sizeof(arr);
	printf("Size of an array is %d\n",a);


	char arrc[]={'a','b','c','d','e'};
	int b=sizeof(arrc);
	printf("Size of an character array is %d\n",b);


	float arrf[]={1.2,20.6,6.5,5.9,5.8};
	int c=sizeof(arrf);
	printf("Size of an character array is %d\n",c);
	return 0;
}
