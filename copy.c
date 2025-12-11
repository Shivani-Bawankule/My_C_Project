#include<stdio.h>
int main()
{
	char ch[50];
	char copy[50];
	printf("Enter string\n");
	scanf("%s", ch);
	int k;

	for(k=0;ch[k]!=0;k++)
	{
		copy[k]=ch[k];
	}
	printf("Copy string:%s", copy);
	
	return 0;
}

