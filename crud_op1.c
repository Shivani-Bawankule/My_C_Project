#include <stdio.h>
#include <stdlib.h>
struct emp
{
	int id;
	char name[10];
	struct add
	{
	char add_line1[100];
	char add_line2[100];
	}a;
	char city[50];
 	char state[50];
	int pincode;
	int isDeleted;
	int isdigit;
};


struct emp e[5];

int i=0;
int d=0;
void add()
{
	d++;
	i++;
	e[i].id=i;
        printf("Enter Name:\n");
	scanf("%s", e[i].name);
        printf("Enter Address line 1:\n");
	scanf(" %s", e[i].a.add_line1);
        printf("Enter Address line 2:\n");
	scanf(" %s", e[i].a.add_line2);
        printf("Enter City:\n");
	scanf(" %s", e[i].city);
        printf("Enter State:\n");
	scanf("%s", e[i].state);

        printf("Enter Pincode:\n");
	scanf("%d",  &e[i].pincode);
/*	while(e[i].pincode==e[i].isnumber())
	{
        printf("Enter Pincode:\n");
	scanf("%d",  &e[i].pincode);
	if(e[i].pincode!=e[i].isnumber())
	{
		printf("Please Enter Correct Pincode\n");
	}
	}*/
	e[i].isDeleted=1;
}

void update()
{
	int a, recno;
	printf("Which record:\n");
	scanf("%d", &recno);

	if(i>=1&&recno==e[recno].id)
	{
	printf("Which of the data you want to update\n");
	printf("1. ID\n 2. Name\n 3. Address Line 1\n 4. Address Line 2\n 5. City\n 6. State\n 7.  Pincode\n ");
	scanf("%d",&a);
	switch(a)
		{
		   	case 1:

				printf("Enter Updated id:\n");
				scanf("%d",&e[recno].id);
				printf("Record has been updated:  %d\n",e[recno].id);
				break;
						
			case 2:

				printf("Enter Updated Name\n");
				scanf("%s",e[recno].name);
				printf("Record has been updated:  %s\n",e[recno].name);
				break;

			case 3:

				printf("Enter Updated Address Line 1\n");
				scanf("%s",e[recno].a.add_line1);
				printf("Record has been updated:  %s\n",e[recno].a.add_line1);
				break;

			case 4:

				printf("Enter Updated Address Line 2\n");
				scanf("%s",e[recno].a.add_line2);
				printf("Record has been updated:  %s\n",e[recno].a.add_line2);
				break;

			case 5:

				printf("Enter Updated City\n");
				scanf("%s",e[recno].city);
				printf("Record has been updated:  %s\n",e[recno].city);
				break;
				
			case 6:

				printf("Enter Updated State\n");
				scanf("%s",e[recno].state);
				printf("Record has been updated:  %s\n",e[recno].state);
				break;

			case 7:

				printf("Enter Updated Pincode\n");
				scanf("%d",&e[recno].pincode);
				printf("Record has been updated:  %d\n",e[recno].pincode);

			default: 
				printf("Invalid Inputs.....\n");
				break;
			}

	}
	else
	{

	printf("Records not found\n");
	printf("Please add your record\n");
	}
}

void delete()
{

	int no;
	printf("Which record");
	scanf("%d", &no);

if(i>=1&&no==e[no].id)
{
	e[no].isDeleted=0;
	d--;
	
}
else
	{
	printf("Records not found\n");
	printf("Please add your record\n");
	}
}

void view()
{
	int j;
if(i>=1)
{
	for (j = 1; j<=i; j++)
	{
		if(e[j].isDeleted==1)
			{
				printf("%d\t%s\t%s\t%s\t%s\t%s\t%d\n", e[j].id, e[j].name, e[j].a.add_line1, e[j].a.add_line2, e[j].city, e[j].state, e[j].pincode);
			}
	}

	printf("No of Record=%d",d);

}
	else
{
	printf("Records not found\n");
	printf("Please add your record\n");
}
}
int main()
{

	printf ("Menu\n");
	int choice;
	while(1)
	{
	printf("Enter your option:\n 1.Add\n 2.Update\n 3.Delete\n 4.View\n 5.Exit\n ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1://add
			{
				add();
				break;
			}

		case 2://update
		       {
				update();
				break;
		       }

		case 3:
		       {
				delete();
				break;
		       }
		case 4:
		       {
				view();
				break;
		       }
		case 5:
		       {
				exit(5);
				break;
		       }
		default:
			{
				printf("Invalid Inputs...........\n");
			}

	}//Switch
	}//While
	return 0;

}
