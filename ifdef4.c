#include<stdio.h>
#define VAL 10
int main()
{
	printf("%d",VAL);
#undef VAL
//	printf("%d", VAL);
#ifdef VAL
	printf("%d",VAL);
#endif
	return 0;
}
