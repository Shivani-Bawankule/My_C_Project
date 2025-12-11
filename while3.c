
#include<stdio.h>
#define SIZE 10
int main()
{
	int i=0,j;
	while(i<=10)
	{
		j=i;
		while(j>=0)
		{
			printf(" ");
			j--;
		}
		printf("*\n");
		i++;
	}
	return 0;
}

