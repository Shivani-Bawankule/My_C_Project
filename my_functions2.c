#include<stdio.h>

//String Lengh
int string_lenght(char ch[])
{
	
//	char ch[50];
//	printf("Enter string of character\n");
//	scanf("%s", ch);
	int j;
	for(j=0;ch[j]!=0;j++)
	{
		;
	}
	//printf("String Lenght is %d", j);
	return j;
}


//Character to Integer COnversion
int char_int_function(char ch[])
{
//	char ch[50];
//	printf("Enter string of character\n");
//	scanf("%s", ch);
	int j,k,n,s=1;
	int r=0;
	for(j=0;ch[j]!=0;j++)
	{
		;
	}
	for(k=0;ch[k]!=0;k++)
	{
		 n=ch[k]-'0';
		for(int p=1;p<=j-1;p++)
		{
		       s=s*10;
		}
		r=r+n*s;
		j--;
		s=1;
	}

//	printf("Integer is:%d\n",r);
	return r;

}

//lower case to upper case string

char* lower_upper_function(char ch[], char upp[])
{
//	char ch[50];
	//char upp[50];
//	printf("Enter lower case string\n");
//	scanf("%s", ch);
//	char ch2='A';
//	int d;
//	printf("ASCII Value of a is %d\n", ch1);
//	printf("ASCII Value of A is %d", ch2);
//	d='a'-'A';
//	printf("distance between a & A is %d\n",d);
	int k,n;

	for(k=0;ch[k]!=0;k++)
	{
		 n=ch[k]-32;
//		printf("Character to Integer Conversion:%c\n",n);
		upp[k]=n;
	}
	upp[k]=0;
//	printf("Lower Case to Upper Case Conversion:%s\n", upp);
	return upp;
}

//Upper case to lower case string

char* upper_lower_function(char ch[], char lwr[])
{
//	char ch[50];
//	char lwr[50];
//	printf("Enter upper case string\n");
//	scanf("%s", ch);
//	char ch1='a';
//	char ch2='A';
//	int d;
//	printf("ASCII Value of a is %d\n", ch1);
//	printf("ASCII Value of A is %d", ch2);
//	d='a'-'A';
//	printf("distance between a & A is %d\n",d);
	int k,n;

	for(k=0;ch[k]!=0;k++)
	{
		 n=ch[k]+32;
//		printf("Character to Integer Conversion:%c\n",n);
		lwr[k]=n;
	}
	lwr[k]=0;
//	printf("Upper Case to lower Case Conversion:%s\n", lwr);
	return lwr;
}
// Copy String Function

char* copy_string_function(char ch[], char copy[]) 
{
//	char ch[50];
//	char copy[50];
//	printf("Enter string\n");
//	scanf("%s", ch);
	int k;

	for(k=0;ch[k]!=0;k++)
	{
		copy[k]=ch[k];
	}
//	printf("Copy string:%s", copy);
	return copy;
	
} 
//Concatation String

char* cat_string_function(char ch1[], char ch2[],char cat[])
{
//	char ch1[50], ch2[50];
//	char cat[500];
//	printf("Enter a 1st String:\n");
//	scanf("%s", ch1);
//	printf("Enter a 2nd String:\n");
//	scanf("%s", ch2);
	int i,j,l;
//	int n=0;
	for(i=0;ch1[i]!=0;i++)
	{
		;
	}
//	printf("Lenght of 1st string is %d\n",i);

	for(j=0;ch2[j]!=0;j++)
	{
		;
	}
//	printf("Lenght of 2nd string is %d\n",j);


	for(l=0; ch1[l]!=0;l++)
	{
		cat[l]=ch1[l];
		
//	printf("cat:%s\n", cat);
	}

		for(int m=0;ch2[m]!=0;m++)
		{

			cat[i]=ch2[m];   // i mean lenth of string 1
			i++;
		}
		cat[i]=0;

//	printf("%s\n", cat);
	return cat;
}

//Compare String Function

void cmp_string_function(char ch1[], char ch2[])
{
//	char ch1[50], ch2[50];
//	char cat[500];
//	printf("Enter a 1st String:\n");
//	scanf("%s", ch1);
//	printf("Enter a 2nd String:\n");
//	scanf("%s", ch2);
	int i;
	int flag=0;

	for(i=0; ch1[i]!=0; i++)
	{
		if(ch1[i]!=ch2[i])
		{
		flag=1;
		break;
		}
//		printf("%c", ch1[i]);
//		printf("%c", ch2[i]);
	}

	if(flag==1)
		{
		printf("Both strings are not matched\n");
		}
	else
		{
		printf("Both strings are matched");
		}

}

//find substring under string

void sub_string_function(char ch1[], char ch2[])
{
//	char ch1[500], ch2[500],ch3[500];
	char ch3[500];
//	printf("Enter a Sub String:\n");
//	scanf("%s", ch1);
//	printf("Enter a  String:\n");
//	scanf("%s", ch2);
	int i,j,k=0;

	int flag=0;
	for(i=0; ch1[i]!=0; i++)
	{
		for(j=0; ch2[j]!=0;j++)
		{

		if(ch1[i]==ch2[j])
		{
			ch3[k]=ch1[i];
			//printf("%c....\n",ch3[k]);
			//printf("%s\n", ch3);
			k++;
			break;

		}

		}

	}
	ch3[k]=0;

//	printf("..........%s..........\n", ch3);
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
}



/*int main()
{
//	char_int_function();
//	lower_upper_function();
//	upper_lower_function();
//	copy_string_function();
//	cat_string_function();
//	cmp_string_function();
	sub_string_function();
return 0;
}*/

