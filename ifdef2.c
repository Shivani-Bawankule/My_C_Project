#include<stdio.h>
#define SQUARE(x) (x*x)
int main()
{
int a;
printf("Enter a number\n");
scanf("%d",&a);
	printf("Square of %d is %d",a,SQUARE(a));
	return 0;
}
