#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct emp
{
	int id;
	char name[10];
	struct add
	{
	char add_line1[100];
	char add_line2[100];
	char city[50];
 	char state[50];
	int pincode;
	}a;
	int is_inserted;
	int is_deleted;;
};


struct emp e[5];


int i=1;   //for each record location
int d=0;   //to print no of records bcoz after decrement in delete function it change its value accordingly,  
int j;

int add(struct emp s)
	{

		e[i]=s;
		e[i].is_inserted=1;
		i++;
		d++;
		return 1;
	}

void update(int a, int recno, char name_u[50], char add1_u[50], char add2_u[50], char city_u[50], char state_u[50], int pincode_u)
	{	
		switch(a)
		{
		   	case 1:

				strcpy(e[recno].name, name_u);
				printf("Record has been updated:  %s\n",e[recno].name);
				break;
						
			case 2:

				strcpy(e[recno].a.add_line1, add1_u);
				printf("Record has been updated:  %s\n",e[recno].a.add_line1);
				break;

			case 3:

				strcpy(e[recno].a.add_line2, add2_u);
				printf("Record has been updated:  %s\n",e[recno].a.add_line1);
				break;

			case 4:

				strcpy(e[recno].a.city, city_u);
				printf("Record has been updated:  %s\n",e[recno].a.city);
				break;
				
			case 5:

				strcpy(e[recno].a.state, state_u);
				printf("Record has been updated:  %s\n",e[recno].a.state);
				break;

			case 6:

				e[recno].a.pincode=pincode_u;
				printf("Record has been updated:  %d\n",e[recno].a.pincode);

			default: 
				printf("Invalid Inputs.....\n");
				break;
			}

	}


void  delete(int dd)
	{
		e[dd].is_inserted=0;
		e[dd].is_deleted=1;
		d--;
	}


void  undelete(int udd)
	{
		e[udd].is_deleted=0;
		e[udd].is_inserted=1;
		d++;
	}


struct emp  view_all();
struct emp  view_range(int r1, int r2);
struct emp view_rec(int n);

void view(int n)
{
	switch(n)
	{

		case 1:
				struct emp a1;
				int m=1;
				while(m<i)
				{
				a1=view_all(m);
				printf("%d\t%s\t%s\t%s\t%s\t%s\t%d\n", a1.id, a1.name, a1.a.add_line1, a1.a.add_line2, a1.a.city, a1.a.state, a1.a.pincode);
				m++;
				}
				break;
		case 2:			      	
				int range1, range2;
			       	printf("Enter range to view record\n");
			       	scanf("%d", &range1);
			       	scanf("%d", &range2);
				struct emp s1;
				for (int k = range1; k<=range2; k++)
				{
				s1=view_range(range1,range2);
				printf("%d\t%s\t%s\t%s\t%s\t%s\t%d\n", s1.id, s1.name, s1.a.add_line1, s1.a.add_line2, s1.a.city, s1.a.state, s1.a.pincode);
				range1++;
				}
		
				break;
		       	
		case 3:
			       	int rec_no;
			       	printf("Enter record number\n");
			       	scanf("%d", &rec_no);
				struct emp s;
				s=view_rec(rec_no);
				printf("%d\t%s\t%s\t%s\t%s\t%s\t%d\n", s.id, s.name, s.a.add_line1, s.a.add_line2, s.a.city, s.a.state, s.a.pincode);
				break;

		default: 
				printf("Invalid inputs\n");
				break;

	}
				
}

struct emp view_all(int f)
{

	if(i>=1)
	{
	//	printf("value of i is %d\n", i);
		if(e[f].is_inserted==1)
			{
				return e[f];
			}

	printf("No. of records %d\n", d);
	}
	else
		{
			printf("Records not found\n");
		}
}


struct emp view_range(int r1, int r2)
{
	if(i>=1 && i>r1 && r2<i)
	{	
		for (j = r1; j<=r2; j++)
		{
			if(e[j].is_inserted==1)
				{
					return e[j];
					
				}
		}

	}	

	else
		{
			printf("Records not found\n");
		}
}

struct emp view_rec(int n)
{

	if(i>=1)
	{
		if(e[n].is_inserted==1)
			{
				return e[n];
			}

	}	
	else
	{
	printf("Records not found\n");
	}
}


int main()
{


	printf ("Menu\n");
	int choice;
	while(1)
	{
	printf("Enter your option:\n 1.Add\n 2.Update\n 3.Delete\n 4.View\n 5.Undelete\n 6.Exit\n ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1://add
			{
				e[i].id=i;
        			printf("Enter Name:\n");
				scanf("%s", e[i].name); //or strcpy(e[i].name,"Shivani");  e[i].name="shivani" is wrong becouse it copy 1st character only v
        			printf("Enter Address line 1:\n");
				scanf(" %s", e[i].a.add_line1);
        			printf("Enter Address line 2:\n");
				scanf(" %s", e[i].a.add_line2);
        			printf("Enter City:\n");
				scanf(" %s", e[i].a.city);
        			printf("Enter State:\n");
				scanf("%s", e[i].a.state);
        			printf("Enter Pincode:\n");
				scanf("%d",  &e[i].a.pincode);

				int retu=add(e[i]);
				if(retu==1)
				{
					printf("Record added\n");
				}
					
				
				break;
			}

		case 2://update
		       {

			        int rd;
			        printf("Which Record No you have update\n");
			        scanf("%d", &rd);
				
				int a;

				if(i>=1&&rd==e[rd].id)
				{
					printf("Which of the data you want to update\n");
					printf("1. Name\n 2. Address Line 1\n 3. Address Line 2\n 4. City\n 5. State\n 6.  Pincode\n ");
					scanf("%d",&a);

					char name_update[50];
					char add1_update[50];
					char add2_update[50];
					char city_update[50];
					char state_update[50];
					int pincode_update;
					switch(a)
						{
		   					case 1:
								printf("Enter Updated name:\n");
								scanf("%s",name_update);
								update(a, rd, name_update, add1_update, add2_update, city_update, state_update, pincode_update);
								break;
						
							case 2:

								printf("Enter Updated address_line 1:\n");
								scanf("%s",add1_update);
								update(a, rd, name_update, add1_update, add2_update, city_update, state_update, pincode_update);
								break;

							case 3:

								printf("Enter Updated address_line 2:\n");
								scanf("%s",add2_update);
								update(a, rd, name_update, add1_update, add2_update, city_update, state_update, pincode_update);
								break;

							case 4:

								printf("Enter Updated City\n");
								scanf("%s",city_update);
								update(a, rd, name_update, add1_update, add2_update, city_update, state_update, pincode_update);
								break;
							case 5:

								printf("Enter Updated State\n");
								scanf("%s",state_update);
								update(a, rd, name_update, add1_update, add2_update, city_update, state_update, pincode_update);
								break;
							case 6:

								printf("Enter Updated Pincode\n");
								scanf("%d",&pincode_update);
								update(a, rd, name_update, add1_update, add2_update, city_update, state_update, pincode_update);

							default: 
								printf("Invalid Inputs.....\n");
								break;
						}
				}
				else
				{		

					printf("Records not found\n");
				}


				break;
		       }

		case 3:
		       {
			        int rd;
			        printf("Which Record No you have deleted\n");
			        scanf("%d", &rd);
				if (i>=1 && rd==e[rd].id)
				{
					delete(rd);
					printf("%d record has been deleted\n",rd);
				}
				else
				{
					printf("Record is not found\n");
				}
				break;
		       }
		case 4:
		       {
				int choice;
				printf("Enter choice\n");
				printf("\n 1. View all records?\n 2. View records in range?\n 3. View Perticular Record\n");
				scanf("%d", &choice);
			       	view(choice);
				break;
		       }	
		case 5:
		       {
			        int ud;
			        printf("Which Record No you have undelete\n");
			        scanf("%d", &ud);
				if (e[ud].is_deleted==1)
				{
					undelete(ud);
					printf("%d record has been undelete\n",ud);
				}
				else
				{
					printf("Record No. %d is not available\n",ud);
				}
				break;
		       }
		case 6:
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
