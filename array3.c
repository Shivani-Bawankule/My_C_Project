#include<stdio.h>
#include <stdlib.h>
int main()
{
	int size;
	char arr[10];
	printf("Enter a name \n");
	scanf("%s",&arr[0]);
/*	for(int i=0;arr[i] != 0;i++)
	{
        fflush(stdin);
	scanf(" %c",&arr[i]);
        fflush(stdin);
	}
*/

	printf("Name is %s", arr);
	
	return 0;
}
