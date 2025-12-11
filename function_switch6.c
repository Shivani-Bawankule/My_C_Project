#include<stdio.h>
#include<stdlib.h>
#include "function_switch5.c"

int main()
	{
		int SIZE,n;
		for(;;)
		{
		printf("Enter a value of size\n");
		scanf("%d",&SIZE);

		printf("Enter a choice\n");
		printf(" 1. Draw a Vertical\n 2. Draw a Horizontal\n 3.Draw a inclined line\n 4. Draw a Opp inclined line\n"); 
	        printf(" 5. Draw a square\n 6. Draw a Right angle traingle\n 7. Draw a opposite right angle triangle\n"); 
		printf(" 8. Draw a Equilateral Triangle \n 9. Draw a Opp. of Equilateral Triangle\n");
		scanf("%d",&n);

		switch(n)
		{
			case 1: 
				{
				function_line(SIZE);
				break;
				}
			case 2:
				{
				function_line1(SIZE);
				break;
				}
			case 3:
				{
				function_line2(SIZE);
				break;
				}
			case 4:
				{
				function_line3(SIZE);
				break;
				}
			case 5:
				{
				function_sq(SIZE);
				break;
				}
		 	case 6:
				{
				function_rtriangle(SIZE);
				break;
				}
			case 7:
				{
				function_rtriangle1(SIZE);
				break;
				}
			case 8:
				{
				function_eqtriangle(SIZE);
				break;
				}
			case 9:
				{
				function_eqtriangle1(SIZE);
				break;
				}
			case 10:
				{
					printf("EXIT");
					exit(10);
				}
			default:
				{
					printf("Invalid Input.....");
					break;
				}
		}//switch end
		 
		 }//for end
		return 0;
	}


