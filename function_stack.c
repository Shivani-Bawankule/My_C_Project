#include<stdio.h>
void function_B();
void function_C();
void function_D();
void function_E();
	void function_A()
	{
//		printf("function A\n");
		function_B();
	}

	void function_B()
	{
//		printf("function B\n");
		function_C();
	}

	void function_C()
	{
//		printf("function C\n");
		function_D();
	}

	void function_D()
	{
//		printf("function D\n");
		function_E();
	}

	void function_E()
	{
//		printf("function E\n");
		//void function_F();
	}

int main()
{
	function_A();
	return 0;
}
