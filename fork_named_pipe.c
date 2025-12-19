#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>

int main()
{
	int i= fork();
	int fp;
	if(i==0)
	{
		
		fp=open("Shivani", O_WRONLY);
		write(fp, "Hello Shivani", 13);
	}
	else
	{
		char ch[50];
		fp=open("Shivani", O_RDONLY);
		int n=read(fp, ch, sizeof(ch)-1);
		ch[n]='\0';
		printf("Reader Mode: %s\n", ch);
	}
	close(fp);
}

