#include<stdio.h>

struct employee
{
	int emp_id;
	char name[20];
	char f_name[20];
	char s_name[20];
	int age;
	float salary;
}e1[2];

int main()
{
	int n;
	for(int i=0;i<2;i++)
	{
		printf("Enter %d Employee ID\n",i+1);
		scanf("%d",&e1[i].emp_id);
		printf("Enter %d Employee Name\n",i+1);
		scanf("%s",e1[i].name);
		printf("Enter %d Employee Father Name\n",i+1);
		scanf("%s",e1[i].f_name);
		printf("Enter %d Employee Surname\n",i+1);
		scanf("%s",e1[i].s_name);
		printf("Enter %d Employee age\n",i+1);
		scanf("%d",&e1[i].age);
		printf("Enter %d Employee salary\n",i+1);
		scanf("%f",&e1[i].salary);
	}


	for(int i=0;i<2;i++)
	{
		printf("%d Employee Id is %d\n",i+1,e1[i].emp_id);
		printf("%d Employee Name is %s\n",i+1,e1[i].name);
		printf("%d Employee Father  Name is %s\n",i+1,e1[i].f_name);
		printf("%d Employee Surname is %s\n",i+1,e1[i].s_name);
		printf("%d Employee Age is %d\n",i+1,e1[i].age);
		printf("%d Employee Salary is %f\n",i+1,e1[i].salary);

	}

	n=sizeof(e1);
	printf("Size of Structure-Employee is %d",n);
	return 0;
}
