#include<stdio.h>
int main()
{
	int i,j,k,l;
	
	i=0;

	while(i<=10)
	{
		j=i;

		while(j<=10)
		{
			printf(" ");
		j++;
		}
		printf("*");

	        k=i;

		while(k>=0)
		{
			printf(" ");
		k--;
		}

		printf("*\n");
		i++;
	}

	l=0;
	while(l<=10)
	{
		printf("*");
		l++;
	}
	return 0;
}

