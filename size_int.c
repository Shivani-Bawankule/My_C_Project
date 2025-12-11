#include<stdio.h>

	void int_size()
	{
		int i,n;
		n=sizeof(i);

			printf("size of integer is %d\n",n);
	}
	
	void char_size()
	{

		int n;
		char ch;
		n=sizeof(ch);

			printf("size of character is %d\n",n);
	}
	int main()
	{
		int_size();
		char_size();
	return 0;
	}
