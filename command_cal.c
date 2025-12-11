#include<stdio.h>
#include<stdlib.h>

int main( int argc, char *num[])
{
	int res;
	
	printf("%s\n", num[0]);
	printf("%s\n", num[1]);
	printf("%s\n", num[2]);
	printf("%s\n", num[3]);
	
	char ch='*';
		
	printf("%d\n", ch); //42

	if(argc!=4)
	{
		printf("Invalid Arguments\n");
		printf("Correct Syntax is cal <oprand> <operator> <operand>\n");
		exit(0);
	}	

	switch(num[2][0])
	{
		case '+': res=atoi(num[1])+atoi(num[3]);
		        	printf("%d\n", res);
		        	break;

		case '-': res=atoi(num[1])-atoi(num[3]);
		        	printf("%d\n", res);
		        	break;

		case '*': res=atoi(num[1])*atoi(num[3]);
		        	printf("%d\n", res);
		        	break;

		case '/': res=atoi(num[1])/atoi(num[3]);
		        	printf("%d\n", res);
		        	break;

		case '%': res=atoi(num[1])%atoi(num[3]);
		        	printf("%d\n", res);
		        	break;


		default : printf("INVALID INPUTS\n");
	}

	return 0;
}
