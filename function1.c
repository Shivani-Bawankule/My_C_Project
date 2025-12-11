#include<stdio.h>
#define SIZE 5

	void function_line(int a)
	{
	for(int i=0;i<=a;i++)
	{
		printf("*\n");
	}
	}


	void function_line1(int a)
	{
	for(int i=0;i<=a;i++)
	{
		printf("*");
	}

	printf("\n");
	}

 	void function_line2(int a)
	{
		for(int i=0;i<=a;i++)
		{
			for(int j=i;j>=0;j--)
			{
				printf(" ");
			}
			printf("*\n");
		}

	printf("\n");
	}


	void function_line3(int a)
	{
		for(int i=0;i<=a;i++)
		{
			for(int j=i;j<=a;j++)
			{
				printf(" ");
			}
			printf("*\n");
		}
		printf("\n");
	}
	
	void function_sq(int a)
	{
		for(int i;i<=a;i++)
		{
			printf("*");
		}
		printf("\n");

		for(int j=0;j<=a;j++)
		{
			printf("*");
			for(int k=0;k<=a;k++)
			{
				printf(" ");
			}
			printf("*\n");
		}

		for(int l=0;l<=a;l++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	void function_rtriangle(int a)
	{
		for(int i=0;i<=a;i++)
		{
			printf("*");
			for(int j=i;j>=0;j--)
			{
				printf(" ");
			}
			printf("*\n");
		}
		for(int k=0;k<=a;k++)
		{
			printf("*");
		}
		printf("\n");
	}

	void function_rtriangle1(int a)
	{
		for(int i=0;i<=a;i++)
		{
			for(int j=i;j<=a;j++)
			{
				printf(" ");
			}
			printf("*");
			for(int k=i;k>=0;k--)
			{
				printf(" ");
			}
			printf("*\n");
		}

		for(int l=0;l<=a;l++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	void function_eqtriangle(int a)
	{
		for(int i=0;i<=a;i++)
		{
			for(int j=i;j<=a;j++)
			{
				printf(" ");
			}
			printf("*");

			for(int k=2*i; k>=0;k--)
			{
				printf(" ");
			}
			printf("*\n");
		}

		for(int l=0;l<=2*a;l++)
		{
			printf("*");
		}
		printf("\n");
	}

	void function_eqtriangle1(int a)
	{
		for(int i=0;i<=2*a;i++)
		{
		   printf("*");
		}

		for(int j=0;j<=a;j++)
		{
			for(int k=j;k>=0;k--)
			{
				printf(" ");
			}
			printf("*");

			for(int l=2*j;l<=2*a;l++)
			{
			printf(" ");
			}
			printf("*\n");
		}
		printf("\n");
	}


	int main()
	{
		function_line(SIZE);
		function_line1(SIZE);
		function_line2(SIZE);
		function_line3(SIZE);
		function_sq(SIZE);
		function_rtriangle(SIZE);
		function_rtriangle1(SIZE);
		function_eqtriangle(SIZE);
		function_eqtriangle1(SIZE);
		return 0;
	}

