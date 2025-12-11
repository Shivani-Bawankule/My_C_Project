#include<stdio.h>
#include "my_functions.c"

int main()
	{
		char ch1[50];
		char copy[50];
		printf("Enter a string\n");
		scanf("%s", ch1);
   		copy_string_function(ch1,copy);
		printf("%s", copy);
	}
