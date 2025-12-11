#include<stdio.h>
int main()
{
	char ch1[50], ch2[50];
	char cat[500];
	printf("Enter a 1st String:\n");
	scanf("%s", ch1);
	printf("Enter a 2nd String:\n");
	scanf("%s", ch2);
	int i;
	int flag=0;

	for(i=0; ch1[i]!=0; i++)
	{
		if(ch1[i]!=ch2[i])
		{
		flag=1;
		break;
		}
		printf("%c", ch1[i]);
		printf("%c", ch2[i]);
	}

	if(flag==1)
		{
		printf("not m,atched\n");
		}
	else
		{
		printf("matched");
		}


	// compare lenght

/*if(i>j)
{
	r=i;
}
else
{
	r=j;
}
	for(int l=0;l<r;l++)
	{
		if(ch1[l]==ch2[l])
		{
			n=n+1;
		//	printf("%d\n",n);
		}
	}

	if(n==i &&  n==j)
	{
		printf("Both strings are matched\n");
	}
	else
	{
		printf("Both strings are not  matched\n");
	}*/
	return 0;
}

