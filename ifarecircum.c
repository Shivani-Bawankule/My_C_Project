#include<stdio.h>
#define CIRCLE
#define PI 3.14
int main()
{
	int r,cirum,area;
	printf("Enter a value of radius");
	scanf("%d",&r);
#ifdef CIRCLE
cirum=2*PI*r;
	printf("Circumference of a Cicle is %d",cirum);
#endif

#ifdef CIRCLE
area=PI*r*r;
        printf("Area of Circle is %d",area);
#endif
	return 0;
}
