#include<stdio.h>
int main()
{
	char ch, ch_2;
	printf("enter a character");
	scanf("%c",&ch);
	ch_2=ch-32;
	printf("Capital of character %c is %c ", ch, ch_2);
	printf("ASCII value of %c is %d", ch, ch);
		
	printf("ASCII value of %c is %d", ch_2,ch_2);
	return 0;
}

