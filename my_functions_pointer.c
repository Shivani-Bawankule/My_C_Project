#include<stdio.h>

//String Lengh
int string_lenght(char *ch) //ch mean add of 1 array element & *ch mean value of 1st array element
{
	
//	char ch[50];
//	printf("Enter string of character\n");
//	scanf("%s", ch);
	int j;
	//printf("%c", *ch);
	//ch++;

	//printf("%c", *ch);
	for(j=0;*ch!=0;j++)
	{
		printf("%c", *ch);
		ch++;         ///address increment 
	}
	//printf("String Lenght is %d", j);
	return j;
}


//Character to Integer COnversion
int char_int_function(char *ch)
{
//	char ch[50];
//	printf("Enter string of character\n");
//	scanf("%s", ch);
	int j,k,n,s=1;
	int r=0;
	for(j=0;*ch!=0;j++)
	{
		ch++;
	}
	//now ch is reach to null character
	//change its position to 1st element 
	ch=ch-j;
	for(k=0;*ch!=0;k++)
	{
	//	printf("%d", k);
		 n=*ch-'0';
	//	 printf("n is %d",n);
		for(int p=1;p<=j-1;p++)
		{
		       s=s*10;
		}
		r=r+n*s;
		j--;
		s=1;
		ch++;
	}
	printf("Integer is:%d\n",r);
	return r;

}

//lower case to upper case string

char* lower_upper_function(char *ch, char *upp)
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

	for(k=0;*ch!=0;k++)
	{
		 n=*ch-32;
//		printf("Character to Integer Conversion:%c\n",n);
		*upp=n;
		ch++;//address of ch increase
		upp++; //address of upp is increase
	}
	*upp=0;  //now upp is reach to null terminator
//	printf("Lower Case to Upper Case Conversion:%s\n", upp);
	return upp;
}

//Upper case to lower case string

char* upper_lower_function(char *ch, char *lwr)
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

	for(k=0;*ch!=0;k++)
	{
		 n=*ch+32;
//		printf("Character to Integer Conversion:%c\n",n);
		*lwr=n;
		ch++;
		lwr++;
	}
	*lwr=0;
//	printf("Upper Case to lower Case Conversion:%s\n", lwr);
	return lwr;
}
// Copy String Function

char* copy_string_function(char *ch, char *copy) 
{
//	char ch[50];
//	char copy[50];
//	printf("Enter string\n");
//	scanf("%s", ch);
	int k;

	for(k=0;*ch!=0;k++)
	{
		*copy=*ch;
		copy++;
		ch++;
	}
//	printf("Copy string:%s", copy);
	return copy;
	
} 
//Concatation String

char* cat_string_function(char *ch1, char *ch2,char *cat)
{
//	char ch1[50], ch2[50];
//	char cat[500];
//	printf("Enter a 1st String:\n");
//	scanf("%s", ch1);
//	printf("Enter a 2nd String:\n");
//	scanf("%s", ch2);
	int i,j,l;
//	int n=0;
	for(i=0;*ch1!=0;i++)
	{
		ch1++;
	}
	ch1=ch1-i;
//	printf("Lenght of 1st string is %d\n",i);

	for(j=0;*ch2!=0;j++)
	{
		ch2++;
	}
	ch2=ch2-j;
//	printf("Lenght of 2nd string is %d\n",j);


	for(l=0; *ch1!=0;l++)
	{
		*cat=*ch1;
		cat++;
		ch1++;
		
//	printf("cat:%s\n", cat);
	}

		for(int m=0;*ch2!=0;m++)
		{

			*cat=*ch2;   // not cat is last position of 1st string 
			cat++;
			ch2++;
		}
		*cat=0;

//	printf("%s\n", cat);
	return cat;
}

//Compare String Function

int cmp_string_function(char *ch1, char *ch2)
{
	
		while(*ch1!='\0' || *ch2!='\0')
		{
			if(*ch1 && *ch2 && *ch1!=*ch2)
			{
				return 0;

			}
			ch1++;
			ch2++;
		}

			return 1;
	

}

//find substring under string

int sub_string_function(char *ch1, char *ch2)
//we return integer value 
{

	char *p1, *p2; //*p1 & *p2 pointer to hold both string & substring

	while(*ch2)  //1st element of main string ch2
	{
		p1=ch1;   //p1 point 1st address of substring
		p2=ch2;   //p2 point 1st address of main string
		while(*p1 && *p2 && *p1==*p2)   //now to compare 1st element of both string
		{
			p1++; //if both elements of both strings are matched then it increament by 1
			p2++; //p2 also
		}

		if(*p1=='\0')  //if substring is getting terminate and then only it return positive value 
		{
			return 1;
		}
		ch2++;//to increase position of address by 1 of main string
	}
	return 0;
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

