#include<stdio.h>
int main(int arg, char *argv[])
{
	FILE *fp;
	fp=fopen(argv[1], argv[2]);

	if (fp==NULL)// if file is not open then print ................
	{
		printf("............");
	}

	char ch;
	while(ch!=EOF)
	{
		ch=getc(fp);
			printf("%c", ch);
	}
}
