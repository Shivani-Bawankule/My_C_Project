#include <stdio.h>
int main()
{
	int i=10;
	char array[20]={"Shivani"};
	printf("%c\n", array[0]);   //s
	printf("%c\n", *(array+3));//v
	printf("%c\n", *(&(array[0])+3));//v
	printf("%c\n", array[3]);//v
	printf("%d\n", *(&i)); //10
	return 0;
}


