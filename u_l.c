#include<stdio.h>
int main()
{
	char ch[50];
	char lwr[50];
	printf("Enter string\n");
	scanf("%s", ch);
	char ch1='a';
	char ch2='A';
	int d;
	printf("ASCII Value of a is %d\n", ch1);
	printf("ASCII Value of A is %d", ch2);
	d='a'-'A';
	printf("distance between a & A is %d\n",d);
	int k,n;

	for(k=0;ch[k]!=0;k++)
	{
		 n=ch[k]+32;
		printf("Character to Integer Conversion:%c\n",n);
		lwr[k]=n;
	}
	printf("Upper Case to lower Case Conversion:%s", lwr);
	
	return 0;
}

