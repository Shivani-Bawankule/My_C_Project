#include<stdio.h>
int main()
{
	int p,n,r;
	float sim_in;
	printf("Enter the amount of p,n & r");
	scanf("%d%d%d",&p,&n,&r);
	sim_in=p*n*r/100.0;
	printf("simple intrest=%f",sim_in);
	return 0;
}
