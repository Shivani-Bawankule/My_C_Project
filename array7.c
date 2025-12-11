#include<stdio.h>
int main()
{
	int student_rollno[10];
	printf("Enter a student roll no\n");
	scanf("%ls",student_rollno);


	int a=sizeof(student_rollno);
	printf("Size of an array is %d\n",a);


	char name[20];
	printf("Enter a student Name\n");
	scanf("%s",&name[0]);
	int b=sizeof(name);
	printf("Size of an character array is %d\n",b);
	
	printf("Student Roll No:%ls\n",student_rollno);
	printf("Student Name:%s\n",name);

	return 0;
}
