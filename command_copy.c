#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{

	FILE *fp;
	fp=fopen(argv[1], "r");//sourse file

	FILE *fp1;
	fp1=fopen(argv[2],"w");//destination file

	if(argc!=3)
	{
		printf("Correct Syntax is output_file <source_file> <destination_file>");
		return 1;
	}

	if(fp==NULL)
	{
		printf("Source file is not found\n");
		return 1;
	}

	char ch=getc(fp);
	while(ch!=EOF)
	{
		putc(ch, fp1);
		ch=getc(fp);

	}
	fclose(fp);
	fclose(fp1);


}
