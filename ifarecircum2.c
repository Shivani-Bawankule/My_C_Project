#include<stdio.h>
#define PI 3.14
int main()
{
	int r,cirum,area;
	#ifdef CIR
	printf("Enter a value of radius");
	scanf("%d",&r);
		cirum=2*PI*r;
		printf("Circumference of a Cicle is %d",cirum);
	#endif

	#ifdef AREA
	printf("Enter a value of radius");
	scanf("%d",&r);
	area=PI*r*r;
        printf("Area of Circle is %d",area);
	#endif
	return 0;
}
