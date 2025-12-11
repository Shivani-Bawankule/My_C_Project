#include<stdio.h>
struct mult
{
	int num1[5];   //num1[5]={10,20,30,40,50}
	int num2[5];   //
	int mul[5];
}m1;

int main()
{
	int i;
	for(i=1; i<=5; i++)
	{
		printf("Enter %d number\n",i);
		scanf("%d", &m1.num1[i]);
	}
	for(i=1; i<=5; i++)
	{
		printf("Enter %d number\n",i);
		scanf("%d", &m1.num2[i]);
	}
	for(i=1; i<=5; i++)
	{
	    m1.mul[i] = m1.num1[i] * m1.num2[i];	
		
	}
	for(i=1; i<=5; i++)
	{
		printf("Multiplication:");
		printf("%d\n", m1.mul[i]);	
        }

/*for(int i=0;i<5;i++)
{
	for(int j=i;j<5;j++)
	{
	printf("Enter a 1st number\n");
	scanf("%d",&s[i].num1[j]);
	printf("Enter a 2nd number\n");
	scanf("%d",&s[i].num2[j]);
	s[i].mul[j]=s[i].num1[j]*s[i].num2[j];
	printf("\nMultiplication of Two Numbers:");
	printf("%d",s[i].mul[j]);
	}
}*/
return 0;
}
