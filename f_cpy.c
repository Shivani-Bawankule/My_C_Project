#include<stdio.h>
int main()
{
	char ch1[50];
	char cpy[500];
	printf("Enter a  String:\n");
	scanf("%s", ch1);
	int i,l;
	for(i=0;ch1[i]!=0;i++)
	{
		;
	}
	printf("Lenght of string is %d\n",i);


	for(int l=0;l<=i;l++)
	{
		cpy[l]=ch1[l];
	}

	printf("Copied String is %s", cpy);
	return 0;
}

