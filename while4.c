#include<stdio.h>
int main()
{
	int i=0,j;
	while(i<=10)
	{
		j=i;
		while(j<=10)
		{
			printf(" ");
			j++;
		}
		printf("*\n");
		i++;
	}
	return 0;
}
