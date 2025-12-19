#include<stdio.h>
#include<unistd.h>
int  main()
{
	int ret;
	char ch[100];
	printf("Enter file name to be deleted\n");
	scanf("%s", ch);

	ret = unlink(ch);

	if(ret==0)
	{
		printf("File is removed");
	}
	else
	{
		printf("file is not found");
	}
}

