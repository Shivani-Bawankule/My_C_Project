
#include<stdio.h>
#define SIZE 10
#define f_line 
#define f_line1
#define f_line2
#define f_line3
#define f_sq
#define f_rtriangle
#define f_rtriangle1
#define f_eqtriangle
#define f_eqtriangle1

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
	//	int n;
	//	printf("Enter value of size\n");
	//	scanf("%d",&n);
	#ifdef 	f_line
		{
		function_line(SIZE);
		}
	#endif
	#ifdef f_line1
		{
		function_line1(SIZE);
		}
	#endif
	#ifdef f_line2
		{
		function_line2(SIZE);
		}
	#endif

	#ifdef f_line3
		{
		function_line3(SIZE);
		}
	#endif

	#ifdef f_sq
		{
		function_sq(SIZE);
		}
	#endif

	#ifdef f_rtriangle
		{
		function_rtriangle(SIZE);
		}
	#endif

	#ifdef f_rtriangle1
		{
		function_rtriangle1(SIZE);
		}
	#endif

	#ifdef f_eqtriangle
		{
		function_eqtriangle(SIZE);
		}
	#endif

	#ifdef f_eqtriangle1
		{
		function_eqtriangle1(SIZE);
		}
	#endif
		return 0;
	}


