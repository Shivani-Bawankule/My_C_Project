#include<stdio.h>
#include "my_functions_pointer.c"


int main()
{
/*	char str[50];
	int lenght;
	printf("Enter a string\n");
	scanf("%s", str);
	
	lenght=string_lenght(str);
	printf("String Lenght:%d", lenght);*/


	/*int num;
	char str[50];
	printf("Enter a string\n");
	scanf("%s", str);
	num=char_int_function(str);
	printf("Char to Int :%d", num);*/
	
/*	char upr[50], lwr[50];
	printf("Enter a lower case string\n");
	scanf("%s", lwr);
	lower_upper_function(lwr,upr);
	printf("%s", upr);*/

/*	char upr[50], lower[50];
	printf("Enter a Upper case string\n");
	scanf("%s", upr);
	upper_lower_function(upr,lower);
	printf("%s", lower);*/

	/*char ch1[50], copy[50];
	printf("Enter a string\n");
	scanf("%s", ch1);
	copy_string_function(ch1,copy);
	printf("Copied String is %s", copy);*/


	/*char ch1[50], ch2[50], cat1[50];
	printf("Enter a 1st string\n");
	scanf("%s", ch1);
	printf("Enter a 2nd string\n");
	scanf("%s", ch2);
	cat_string_function(ch1,ch2,cat1);
	printf("Concatenate of both string is %s\n", cat1);*/


	char ch1[50], ch2[50];
	printf("Enter a 1st string\n");
	scanf("%s", ch1);
	printf("Enter a 2nd string\n");
	scanf("%s", ch2);
	int i=cmp_string_function(ch1,ch2);
	if(i==0)
	{
		printf("Both strings are not matched");
	}
	else
	{
		printf("Both Strings are matched");
	}


	/*char sub[20], string[50];
	printf("Enter a  string\n");
	scanf("%s", string);
	printf("Enter a sub-string\n");
	scanf("%s", sub);
	int i=sub_string_function(sub,string);
	if(i==1)
	{
		printf("Substring is found");
	}
	else
	{
		printf("Substring is not found");
	}*/
return 0;
}


