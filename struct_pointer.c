#include<stdio.h>

struct sum{
	int num1;
	int num2;
	int add;     //add=0 it is wrong inside structure becouse it is not a variable 
}s[5];    //s[5] mean s[0] s[1] s[2] s[3] s[4]


int main()
{
	printf("Enter a 1st number\n");
	scanf("%d",&s[0].num1);
	printf("Enter a 2nd number\n");
	scanf("%d",&s[0].num2);
	s[0].add=s[0].num1+s[0].num2;
	printf("Sum of Two Numbers:\n");
	printf("%d",s[0].add);
	return 0;
}

