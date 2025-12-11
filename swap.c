//SWapping of 2 variable with third variable
#include<stdio.h>

void swap(int x, int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("After Swapping value of a is %d\n", x);
	printf("After Swapping value of b is %d\n", y);

}
int main()
{
	int a,b,temp;
	printf("Enter a value of a\n");
	scanf("%d",&a);
	printf("Enter a value of b\n");
	scanf("%d",&b);
	swap(a,b);
	return 0;
}
	
