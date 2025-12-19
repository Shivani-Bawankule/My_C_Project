#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>

int main()
{

	int fd;
	char ch[50];
	fd=open("Shivani", O_RDONLY);
	if(fd==-1)
	{
	perror("open");
	}
	read(fd, ch, sizeof(ch)-1);

	ch[6]='\0';
	printf("String from reader is %s\n", ch);
	close(fd);

}
