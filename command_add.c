#include<stdio.h>
#include<stdlib.h>

int main( int argc, char *sum[])
{
	printf("\n 1st Argument is %s",sum[1]); 
	printf("\n 2nd Argument is %s",sum[2]); 
	
	printf("\n 3rd Argument is %d",atoi(sum[1])+atoi(sum[2])); 
	printf("\n No. of Argument is %d",argc); 
	return 0;
}
