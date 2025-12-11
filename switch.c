#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	printf("Enter a value of a");
	scanf("%d",&a);
	printf("Enter a value of b");
	scanf("%d",&b);
//	int j = fflush(stdin);
//	printf("%d", j);
		
	printf("Enter any of +,-,*,/,0");

	//fflush(stdin);
	scanf(" %c",&ch);
	//ch=(char)ch;
//	printf("value of ch :%c",ch);
	switch(ch)
	{
	case '+':
		printf("Addition of a & B:%d",a+b);
		break;
	case '-':
		printf("Substraction of a & B:%d",a-b);
		break;
	case '*':
		printf("Multiplication of a & B:%d",a*b);
		break;
	case '/':
		printf("Division of a & B:%d",a/b);
		break;
	case '0':
		printf("Modulus of a & B:%d",a%b);
		break;
	default:printf("Invalid");
		break;
	}
	return 0;
}

