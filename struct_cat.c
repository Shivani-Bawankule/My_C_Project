#include<stdio.h>

struct cat
{
	char name1[50];
	char name2[50];
	char catt[100];
}c1[2];

int main()
{

	int i, j;
	for(int k=0; k<2;k++)
	{
	printf("\nEnter First Name\n");
	scanf("%s",c1[k].name1);
	printf("Enter Second Name\n");
	scanf("%s",c1[k].name2);
	}
	
	for(int k=0; k<2;k++)
	{
	for(i=0;c1[k].name1[i]!=0; i++)
	{
		c1[k].catt[i]=c1[k].name1[i];
	}

	for(j=0; c1[k].name2[j]!=0; j++)
	{
		c1[k].catt[i]=c1[k].name2[j];
		i++;
	}
	c1[k].catt[i]=0;
	}

	for(int k=0; k<2;k++)
	{
	printf("%s\n",c1[k].catt);
	}
return 0;
}
