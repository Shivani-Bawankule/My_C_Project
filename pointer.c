#include<stdio.h>
int main()
{
	int i=10;
	int *j=&i;
	printf("Value of i is %d\n",i);
	printf("Address of i is %d\n",j);
	printf("Address of i is %d\n",&i);
        printf("Address of j is %d\n", &j);
        printf("value of i is %d\n",*j);
        return 0;
}

