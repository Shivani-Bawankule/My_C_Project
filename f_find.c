#include<stdio.h>
int main()
{
	char ch1[500], ch2[500],ch3[500];
	printf("Enter a Sub String:\n");
	scanf("%s", ch1);
	printf("Enter a  String:\n");
	scanf("%s", ch2);
	int i,j,k=0;

	int flag=0;
	for(i=0; ch1[i]!=0; i++)
	{
		for(j=0; ch2[j]!=0;j++)
		{

		if(ch1[i]==ch2[j])
		{
			ch3[k]=ch1[i];
			printf("%c....\n",ch3[k]);
			printf("%s\n", ch3);
			k++;
			break;

		}

		}

	}
	ch3[k]=0;

	printf("..........%s..........\n", ch3);
	for(int l=0;ch3[l]!=0;l++)
	{
		if(ch3[l]!=ch1[l])
		{
			flag=1;
			break;
		}	
	}
	if(flag==1)
	{	

		printf("Substring is not found in string\n");
	}
	else
	{

		printf("Substring is found in string\n");

	}
	return 0;
}

