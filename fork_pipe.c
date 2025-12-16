#include<stdio.h>
#include<unistd.h>
int main()
{
	int arr1[2], arr2[2];
	char ch[20];
	pipe(arr1);
	pipe(arr2);
	int i= fork();


	if(i==0)
	{
		write(arr1[1], "Shivani", 7);

		

		printf("......................\n");

		read(arr2[0], ch, 10);
		printf("Child:%s\n", ch);
	}
	else
	{
		read(arr1[0], ch, 7);
		printf("Parent:%s\n", ch);


		printf("......................\n");


		write(arr2[1], "Bawankule", 10);
	}

}

	
