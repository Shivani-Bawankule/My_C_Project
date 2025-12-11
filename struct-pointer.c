#include<stdio.h>

struct abc
{
	int a;
	int b;
	struct cc  *o;
};


	struct cc 
	{
		char name[50];
	};
struct abc a1[3];
struct abc *p= a1;

int main()
{


	printf("a=  ");
	scanf("%d", &p->a);
	printf("a=%d\n", p->a);
	p++;
	printf("b=  ");
	scanf("%d", &p->b);
	printf("b=%d", p->b);
	p++;
	printf("c=  ");
	scanf("%s", p->o->name);
	printf("c=%s", p->o->name);
	return 0;

}
