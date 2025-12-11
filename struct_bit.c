#include<stdio.h>

struct student
{
	int age:2;
	int wt:2;
	int ht:1;
}s1;

int main()
{
	int n;
//	s1.age=100;
//	s1.wt=50;
//	s1.ht=5;
	n=sizeof(s1);
//	printf("Age=%d\n",s1.age);
//	printf("Weight= %d\n",s1.wt);
//	printf("Height= %d\n",s1.ht);
	printf("Size of Structure-Student is %d",n);
	return 0;
}
