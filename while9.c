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

	j=0;

	while(j<=10)
	{
		k=j;
		while(k>=0)
		{
			printf(" ");
			k--;
		}
		printf("*");
		
		l=2*j;
		while(l<=2*10)
		{
			printf(" ");
			l++;
		}
		printf("*\n");
		j++;
	}
	return 0;
}

