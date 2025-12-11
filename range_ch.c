#include<stdio.h>

	void char_negative()
	{
		char ch=0;

		for(;;)
	{
		if(ch<0)
		{
			break;
		}
		ch++;
	}
	

			printf("%d\n",ch);
	}
	
	void char_positive()
	{
	char ch=0;

	for(;;)
	{
		if(ch>0)
		{
			break;
		}
		ch--;
	}

			printf("%d\n",ch);
	}
	int main()
	{
		char_negative();
		char_positive();
	return 0;
	}
