#include<stdio.h>
#include<unistd.h>
int main()
{
	int arr[2];
	int p = pipe(arr);
	
	//printf("Pipe Return value is %d\n",p);
//	printf("arr[0] for read=%d\n",arr[0]);
//	printf("arr[1] for write=%d\n",arr[1]);

	//write(3,"Hello",6);
	char ch[6];
	write(arr[1],"hello",6);

	read(arr[0], ch, 6);

//	printf("%s", ch);

	/*int ar[2];
	int p2 = pipe(ar);
	printf("ar[0]=%d\n",ar[0]);
	printf("ar[1]=%d\n",ar[1]);*/
	while(1);

}
