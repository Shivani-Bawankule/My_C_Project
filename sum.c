#include <stdio.h>
int main()
{
int num=12345, a,b,c,d,e,sum=0;
a=num%10;
num=num/10;
b=num%10;
num=num/10;
c=num%10;
num=num/10;
d=num%10;
num=num/10;
e=num%10;
sum=a+b+c+d+e;
printf("sum=%d", sum);
return 0;
}

