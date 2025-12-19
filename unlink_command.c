#include<stdio.h>
#include<unistd.h>
int  main(int argc, char *argv[])
{
	int ret;

	ret = unlink(argv[1]);

	if(argc !=2)
	{
		printf("Syntax error\n command_name <file_name>");
	}

	else if(ret==0)
	{
		printf("File is removed");
	}
	else if(ret==-1)
	{
		printf("file is not found");
	}
}

