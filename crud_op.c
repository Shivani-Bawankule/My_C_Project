#include <stdio.h>
#include <stdlib.h>
struct emp
{
	int id;
	char name[10];
	char area[100];
	char city[50];
 	char state[50];
	int pincode;
	int isDeleted;
};


struct emp e[5];

int i=0;

void add()
{

	i++;
	e[i].id=i;
        printf("Enter Name:\n");
	scanf("%s", e[i].name);
        printf("Enter Area:\n");
	scanf(" %s", e[i].area);
        printf("Enter City:\n");
	scanf(" %s", e[i].city);
        printf("Enter State:\n");
	scanf("%s", e[i].state);
        printf("Enter Pincode:\n");
	scanf("%d",  &e[i].pincode);
	e[i].isDeleted=1;
}

void update()
{

	int a, recno;
	printf("Which record:\n");
	scanf("%d", &recno);
	printf("Which of the data you want to update\n");
	printf("1. ID\n 2. Name\n 3. Area\n 4. City\n 5. State\n 6.  Pincode\n ");
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

				printf("Enter Updated Area\n");
				scanf("%s",e[recno].area);
				printf("Record has been updated:  %s\n",e[recno].area);
				break;

			case 4:

				printf("Enter Updated City\n");
				scanf("%s",e[recno].city);
				printf("Record has been updated:  %s\n",e[recno].city);
				break;
				
			case 5:

				printf("Enter Updated State\n");
				scanf("%s",e[recno].state);
				printf("Record has been updated:  %s\n",e[recno].state);
				break;

			case 6:

				printf("Enter Updated Pincode\n");
				scanf("%d",&e[recno].pincode);
				printf("Record has been updated:  %d\n",e[recno].pincode);

			default: 
				printf("Invalid Inputs.....\n");
				break;
			}

}

void delete()
{

	int no;
	printf("Which record");
	scanf("%d", &no);
	e[no].isDeleted=0;
}

void view()
{

	for (int j = 1; j<=i; j++)
	{
		if(e[j].isDeleted==1)
			{
				printf("%d\t%s\t%s\t%s\t%s\t%d\n", e[j].id, e[j].name, e[j].area, e[j].city, e[j].state, e[j].pincode);
			}
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
