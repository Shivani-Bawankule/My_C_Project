#include<stdio.h>
#include<string.h>
int main(int arg[], char *argc[])
{
	if(strcmp(argc[1],argc[2])==0)
	{
		printf("Both strings are matched\n");
	}
	else
	{
		printf("Both strings are not matched\n");
	}
}
