#include<stdio.h>
#include "function3.c"

int main()
	{
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


