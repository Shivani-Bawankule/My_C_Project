#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a value of a:");
	scanf("%d",&a);
	printf("Enter a value of b:");
	scanf("%d",&b);
	printf("Enter a value of c:");
	scanf("%d",&c);

	(a>b)?((a>c)?printf("%d is largest",a):printf("%d is largest",c)):((b>c)?printf("%d is largest",b):printf("%d is largest",c));
			return 0;
}
			
