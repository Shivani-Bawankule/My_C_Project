#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>

int main()
{
	int ret;
	ret= mknod("Shivani", S_IFIFO | 0644, 0);


	int fd;
	fd=open("Shivani", O_WRONLY); 
	if(fd==-1)
	{
		perror("open");
		printf("Pipe is not open");
	}
	int i=write(fd, "Hello", 6);

	if(i==-1)
	{
		perror("write");
		printf("write return an error");
	}

	close(fd);


}
