
#include<stdio.h>
int main()
{
	int a,b;
	int n;
	printf("Enter a value of a");
	scanf("%d",&a);
	printf("Enter a value of b");
	scanf("%d",&b);
	printf("Enter any one out of following\n1.Addition\n2.Substractio\n3.Multiplication\n4.Division\n5.Modulus\n");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
		printf("Addition of a & B:%d",a+b);
		break;
	case 2:
		printf("Substraction of a & B:%d",a-b);
		break;
	case 3:
		printf("Multiplication of a & B:%d",a*b);
		break;
	case 4:
		printf("Division of a & B:%d",a/b);
		break;
	case 5:
		printf("Modulus of a & B:%d",a%b);
		break;
	default:printf("Invalid");
		break;
	}
		return 0;
	}
