
#include<stdio.h>
int main()
{
	int r,cirum,area;
	printf("Enter a value of radius");
	scanf("%d",&r);
#ifdef CIRCUM 
cirum=2*PI*r;
	printf("Circumference of a Cicle is %d",cirum);
#endif

#ifdef AREA
area=PI*r*r;
        printf("Area of Circle is %d",area);
#endif
	return 0;
}
