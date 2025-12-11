#include<stdio.h>
#include<stdlib.h>

struct employee
{
	int emp_id;
	char name[20];
	char f_name[20];
	char s_name[20];
	int age;
	float salary;
};

void create_record(int n)
{

	struct employee e1[int n];
	for(int i=0;i<n;i++)
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

}

void read_record(int n)
{
	struct employee e1[int n];

	for(int i=0;i<n;i++)
	{
		printf("%d Employee Id is %d\n",i+1,e1[i].emp_id);
		printf("%d Employee Name is %s\n",i+1,e1[i].name);
		printf("%d Employee Father  Name is %s\n",i+1,e1[i].f_name);
		printf("%d Employee Surname is %s\n",i+1,e1[i].s_name);
		printf("%d Employee Age is %d\n",i+1,e1[i].age);
		printf("%d Employee Salary is %f\n",i+1,e1[i].salary);
	}
}


void update_record(int n)
{
	struct employee e1[n];
	char arr[20];
	int b;
	printf("Do you have any update in record\n");
	printf("Yes or No");
	scanf("%s",arr);
	if(arr=="Yes")
	{
		printf("Which of the data you want to edit\n");
		printf("1.Employee id\n2.Employee Name\n3.Employee Father Name\n4.Employee Surname\n5.Employee age\n6.Employee Salary\n");
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				{
					printf("Enter Updated Employee Id/n");
					for(int i=0;i<n;i++)
					{

						scanf(" %d",&e1[i].emp_id);
						printf("Updated %d Employee Id is %d\n", i+1,e1[i].emp_id);
					}
					break;
			case 2:
				{
					printf("Enter Updated Employee Name\n");
					for(int i=0;i<n;i++)
					{
						scanf("%s",&e1[i].name);
						printf("Updated %d Employee Name is %s\n",i+1,e1[i].name);
					}
					break;
				}
			case 3:
				{
					printf("Enter Updated Employee Father Name\n");
					for(int i=0;i<n;i++)
					{
						scanf("%s",&e1[i].f_name);
						printf("Updated %d Employee Father Name is %s\n",i+1,&e1[i].f_name);
					}
					break;
				}
			case 4:
				{
					printf("Enter Updated Employee Surname\n");
					for(int i=0;i<n;i++)
					{
						scanf("%s",&e1[i].s_name);
						printf("Updated %d Employee Surname is %s\n",i+1,&e1[i].s_name);
					}
					break;
				}
			case 5:
				{
					printf("Enter Updated Employee age\n");
					for(int i=0;i<n;i++)
					{
						scanf("%d",&e1[i].age);
						printf("Updated %d Employee age is %d\n",i+1,&e1[i].age);
					}
					break;
				}
			case 6:
				{
					printf("Enter Updated Employee Salary\n");
					for(int i=0;i<n;i++)
					{
						scanf("%f",&e1[i].salary);
						printf("Updated %d Employee Salary is %f\n",i+1,&e1[i].salary);
					}
					break;
				}
			default:
				{
					printf(".................Invalid..................");
					break;
				}
		}

	}
		printf("Updated Records:\n");
		printf("Updated %d Employee Id is %d\n", i+1,e1[i].emp_id);
		printf("Updated %d Employee Name is %s\n",i+1,e1[i].name);
		printf("Updated %d Employee Father Name is %s\n",i+1,&e1[i].f_name);
		printf("Updated %d Employee Surname is %s\n",i+1,&e1[i].s_name);
		printf("Updated %d Employee age is %d\n",i+1,&e1[i].age);
		printf("Updated %d Employee Salary is %f\n",i+1,&e1[i].salary);
}

//void delete_record(int n)
//{

int main()
{
	int n,size,a;
	printf("Enter a number of employee\n");
	scanf("%d",&size);
	struct employee e1[size];
	for(;;)
	{
	printf("Choose any one from following:\n");
	printf("1.Create Record\n2.Read Record\n3.Update Record\n4.Delete Record\n5.Exit\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		{
			create_record(size);
			break;
		}

	case 2:
		{
			read_record(size);
			break;
		}	
	case 3:
		{	
			update_record(size);
			break;
		}
	//case 4:
	//	{	
	//		delete_record();
	//		break;
	//	}	
	case 5:
		{
			exit(5);
			break;
		}
	default:
		{
			printf("Invalid Inputs.......");
			break;
		}
	}
	}
	n=sizeof(e1);
	printf("Size of Structure-Employee is %d",n);
	return 0;
}
