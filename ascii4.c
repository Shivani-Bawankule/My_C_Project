#include<stdio.h>
int main()
{
	int a,a_2;
	printf("Enter a Number");
	scanf("%d",&a);
	printf("ASCII value of %d is %d\n", a,a);
	a_2=a+'0';
	printf("%d=%c",a,a_2);
	return 0;
}
