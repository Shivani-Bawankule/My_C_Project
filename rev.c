#include <stdio.h>
int main()
{
	int num=278,a,b,c,rev=0, revf=0;
	a=num%10;
	num=num/10;
	b=num%10;
	c=num/10;
	rev=a*10+b;
	revf=rev*10+c;
printf("reverse number is %d", revf);


	return 0;
}
