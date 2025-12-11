
//SWapping of 2 variable without third variable
#include<stdio.h>

void swap(int x, int y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After Swapping value of a is %d\n", x);
	printf("After Swapping value of b is %d\n", y);

}
int main()
{
	int a,b;
	printf("Enter a value of a\n");
	scanf("%d",&a);
	printf("Enter a value of b\n");
	scanf("%d",&b);
	swap(a,b);
	return 0;
}
	
