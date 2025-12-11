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
//struct emp *p=e;
//struct emp *ad=&p;


int i=0;   //for each record location
int d=0;   //to print no of records bcoz after decrement in delete function it change its value accordingly,  
int j;

int add(struct emp *s)
	{

		e[i]=*s;
		e[i].is_inserted=1;    //for every created record it mark as 1
		i++;
		return 1;
	}


void update(int a, int recno, char *name_u, char *add1_u, char *add2_u, char *city_u, char *state_u, int *pincode_u)
	{	

				struct emp *p=&e[recno];
		switch(a)
		{
		   	case 1:

				strcpy(p->name, name_u);
				printf("Record has been updated:  %s\n",p->name);
				break;
						
			case 2:

				strcpy(p->a.add_line1, add1_u);
				printf("Record has been updated:  %s\n",p->a.add_line1);
				break;

			case 3:

				strcpy(p->a.add_line2, add2_u);
				printf("Record has been updated:  %s\n",p->a.add_line1);
				break;

			case 4:

				strcpy(p->a.city, city_u);
				printf("Record has been updated:  %s\n",p->a.city);
				break;
				
			case 5:

				strcpy(p->a.state, state_u);
				printf("Record has been updated:  %s\n",p->a.state);
				break;

			case 6:

				p->a.pincode=*pincode_u;
				printf("Record has been updated:  %d\n",p->a.pincode);

			default: 
				printf("Invalid Inputs.....\n");
				break;
			}

	}


void  delete(struct emp *p3)
	{
		p3->is_inserted=0;
		p3->is_deleted=1;
	}


void  undelete(struct emp *p3)
	{
		p3->is_deleted=0;
		p3->is_inserted=1;
	}


struct emp*  view_all(int f);
struct emp*  view_range(int r1);
struct emp* view_rec(int n);

void view(int n)
{
	switch(n)
	{

		case 1:
				struct emp a1;
				struct emp *p1=&a1;
				int count =0;
				for(int m=0; m<i; m++)
				{
					if(e[m].is_deleted==0)
					{
				p1=view_all(m);
				printf("%d\t%s\t%s\t%s\t%s\t%s\t%d\n", p1->id, p1->name, p1->a.add_line1, p1->a.add_line2, p1->a.city, p1->a.state, p1->a.pincode);
				count ++;
					}
				}
				break;
		case 2:			      	
				int range1, range2;
			       	printf("Enter range to view record\n");
			       	scanf("%d", &range1);
			       	scanf("%d", &range2);
				struct emp s1;
				struct emp *s2=&s1;
				range1=range1-1;  //for decrementing index
				range2=range2-1;
				if(range1>=0 && range2<i)
				{
				for (int k = range1; k<=range2; k++)

				{

					if(e[k].is_inserted==1)
					{

				s2=view_range(k);
				printf("%d\t%s\t%s\t%s\t%s\t%s\t%d\n", s2->id, s2->name, s2->a.add_line1, s2->a.add_line2, s2->a.city, s2->a.state, s2->a.pincode);
				range1++;
					}
				}
				}
				else
				{
					printf("Record  is not found\n");
				}
		
				break;
		       	
		case 3:
			       	int rec_no;
			       	printf("Enter record number\n");
			       	scanf("%d", &rec_no);
				struct emp s;
				struct emp *s3=&s;
				if(i>=0)
				{
				rec_no=rec_no-1;
				if(e[rec_no].is_inserted==1)
				{
				s3=view_rec(rec_no);
				printf("%d\t%s\t%s\t%s\t%s\t%s\t%d\n", s3->id, s3->name, s3->a.add_line1, s3->a.add_line2, s3->a.city, s3->a.state, s3->a.pincode);
				}
				else
				{
					printf("Record is not found\n");
				}
				}
				break;

		default: 
				printf("Invalid inputs\n");
				break;

	}
				
}

struct emp* view_all(int f)
{

	return &e[f];
}


struct emp* view_range(int r1)
{
	return &e[r1];

}

struct emp* view_rec(int n)
{

	return &e[n];
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
				struct emp *p=&e[i];
				p->id=i+1;
        			printf("Enter Name:\n");
				scanf("%s", p->name); //or strcpy(e[i].name,"Shivani");  e[i].name="shivani" is wrong becouse it copy 1st character only v
        			printf("Enter Address line 1:\n");
				scanf("%s", p->a.add_line1);
        			printf("Enter Address line 2:\n");
				scanf("%s", p->a.add_line2);
        			printf("Enter City:\n");
				scanf("%s", p->a.city);
        			printf("Enter State:\n");
				scanf("%s", p->a.state);
        			printf("Enter Pincode:\n");
				scanf("%d",&p->a.pincode);
				int retu=add(p);
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
				rd=rd-1;

				if(rd>=0 && rd<i)
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
								update(a, rd, name_update, add1_update, add2_update, city_update, state_update, &pincode_update);
								break;
						
							case 2:

								printf("Enter Updated address_line 1:\n");
								scanf("%s",add1_update);
								update(a, rd, name_update, add1_update, add2_update, city_update, state_update, &pincode_update);
								break;

							case 3:

								printf("Enter Updated address_line 2:\n");
								scanf("%s",add2_update);
								update(a, rd, name_update, add1_update, add2_update, city_update, state_update, &pincode_update);
								break;

							case 4:

								printf("Enter Updated City\n");
								scanf("%s",city_update);

								update(a, rd, name_update, add1_update, add2_update, city_update, state_update, &pincode_update);
								break;
							case 5:

								printf("Enter Updated State\n");
								scanf("%s",state_update);
								update(a, rd, name_update, add1_update, add2_update, city_update, state_update, &pincode_update);
								break;
							case 6:

								printf("Enter Updated Pincode\n");
								scanf("%d",&pincode_update);
								update(a, rd, name_update, add1_update, add2_update, city_update, state_update, &pincode_update);

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
				rd=rd-1;
				if (rd>=0 && rd<i)

				{
					if( e[rd].is_inserted == 1 && e[rd].is_deleted == 0)
					{
					delete(&e[rd]);
					printf("%d record has been deleted\n",rd+1);
					}
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
				ud=ud-1;
				if (e[ud].is_deleted==1)
				{
					undelete(&e[ud]);
					printf("%d record has been undelete\n",ud+1);
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
