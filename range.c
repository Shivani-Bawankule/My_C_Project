#include<stdio.h>

	void int_negative()
	{
		int i;

	while(1)
	{
		if(i<0)
		{
			break;
		}
		i++;
	}
	

			printf("%d\n",i);
	}
	
	void int_positive()
	{
	int j;

	while(1)
	{
		if(j>0)
		{
			break;
		}
		j--;
	}

			printf("%d\n",j);
	}
	int main()
	{
		int_negative();
		int_positive();
	return 0;
	}
