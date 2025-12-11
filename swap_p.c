#include<stdio.h>


	void swap_by_value(int a, int b)
	{

		a=a+b;
		b=a-b;
		a=a-b;
		printf("value of a after swapping in function is %d\n", a);
		printf("value of b after swapping in function is %d\n", b);
	}


	void swap_by_pointer(int *a, int *b)
	{

		*a=*a+*b;
		*b=*a-*b;
		*a=*a-*b;
		printf("value of a after swapping in function is %d\n",*a);
		printf("value of b after swapping in function is %d\n",*b);
	}

int main()
{

	int i,j;
	printf("Enter a value\n");
	scanf("%d",&i);
	printf("Enter second value\n");
	scanf("%d",&j);

	swap_by_value(i,j);
	printf("value of a after swapping outside of function is %d\n", i);
	printf("value of b after swapping outside of function is %d\n", j);
	
	swap_by_pointer(&i,&j);
	printf("value of a after swapping outside of function is %d\n", i);
	printf("value of b after swapping outside of function is %d\n", j);
	return 0;
}
