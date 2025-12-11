#include<stdio.h>
int main()
{
	char ch[10];
	printf("Enter string of 3 character\n");
	scanf("%s", ch);
	char ch1='0';
	int j,k,r=0,n,s=1;
	printf("ASCII value of 0 is %d\n", ch1);
	for(j=0;ch[j]!=0;j++)
	{
		;
	}

	printf("Lenght of string is %d\n",j);
	for(k=0;ch[k]!=0;k++)
	{
		 n=ch[k]-'0';
		printf("Character to Integer Conversion:%d\n",n);
		for(int p=1;p<=j-1;p++)
		{
		       s=s*10;
		}
		printf("%d\n",s);
		r=r+n*s;
		j--;
		printf("j=%d\n",j);
		s=1;
	}
printf("Integer is %d",r);

	/*int n1,n2,n3;
		n1=ch[0]-'0';
		printf("Character to Integer Conversion:%d\n",n1);
		n2=ch[1]-'0';
		printf("Character to Integer Conversion:%d\n",n2);
		n3=ch[2]-'0';
		printf("Character to Integer Conversion:%d\n",n3);
		int i=n1*100+n2*10+n3*1;
		printf("Integer:%d",i);
		*/
	return 0;
}
