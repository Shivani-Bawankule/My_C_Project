#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{

	FILE *fp;
	fp=fopen(argv[1], "r");//sourse file

	FILE *fp1;
	fp1=fopen(argv[2],"r");//destination file
	
	if(argc!=3)
	{
		printf("COrrect Syntax is output_file <First_file> <Second_file>\n");
		return 1;
	}
	if(fp==NULL)
	{
		printf("FIle 1 is not vaialble\n");
		return 1;
	}

	if(fp1==NULL)
	{
		printf("FIle 2 is not vaialble\n");
		return 1;
	}
	

	int ch;
	while((ch = getc(fp)) != EOF)
	{
		putchar(ch);
	}
	while((ch = getc(fp1)) != EOF)
	{
		putchar(ch);
	}


	fclose(fp);
	fclose(fp1);


}
