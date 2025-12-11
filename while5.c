#include<stdio.h>
int main()
{
	int i,j,k,l;
	i=0;
	while(i<=2*10)
	{
		printf("*");
		i++;
	}
	printf("\n");	
	
	k=0;
	while(k<=10)
	{
		printf("*");

		l=0;

		while(l<=2*10)
		{
			printf(" ");
			l++;
		}
		printf("*\n");
	k++;
	}

	j=0;
	while(j<=2*10)
	{
		printf("*");
		j++;
	}
	return 0;
}
