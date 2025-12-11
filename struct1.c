#include<stdio.h>

struct student
{
	int age;
	char ch;
	float f;
	int roll_no;
}s1;

int main()
{
	int n;
	s1.age=25;
	s1.roll_no=111;
	s1.ch='a';
	s1.f=1.23;
	n=sizeof(s1);
	printf("Age=%d\n",s1.age);
	printf("ch= %c\n",s1.ch);
	printf("float= %f\n",s1.f);
	printf("Roll-No=%d\n",s1.roll_no);
	printf("Size of Structure-Student is %d",n);
	return 0;
}
