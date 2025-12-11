#include<stdio.h>
int main()
{
	char ch1[50], ch2[50];
	char cat[500];
	printf("Enter a 1st String:\n");
	scanf("%s", ch1);
	printf("Enter a 2nd String:\n");
	scanf("%s", ch2);
	int i,j,k,l;
	int n=0;
	for(i=0;ch1[i]!=0;i++)
	{
		;
	}
	printf("Lenght of 1st string is %d\n",i);

	for(j=0;ch2[j]!=0;j++)
	{
		;
	}
	printf("Lenght of 2nd string is %d\n",j);


	for(int l=0; ch1[l]!=0;l++)
	{
		cat[l]=ch1[l];
		
	printf("cat:%s\n", cat);
	}

		for(int m=0;ch2[m]!=0;m++)
		{

			cat[i]=ch2[m];
			i++;
		}
		cat[i]=0;

	printf("%s\n", cat);
	return 0;
}

