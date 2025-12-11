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
