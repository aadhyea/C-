 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 10

static int index=0;
struct Emp
{
	int id;
	char name[20];
}e[max];

typedef struct Emp E;						//create an array of structure variables and initialise the fields
void insert(E Q[], int *rear)				//then create queue and transfer contents onto the queue
{
       if (*rear == max - 1)
              printf("No space");

       else
       {
              (*rear)++;
              printf("Enter employee ID: ");
              scanf("%d", &e[index].id);
              printf("Enter employee name: ");
              scanf("%s", e[index].name);
              Q[*rear] = e[index];
			  index++;
       }
}



void delete(E Q[max],int *f,int *r)
{
	if((*f)>(*r))
	{
		printf("Nothing to delete\n");
		return;
	}
	printf("Deleted elements are %d \n %s\n",Q[*f].id,Q[*f].name);
	(*f)++;
}

void display(E Q[max],int f,int r)
{
	if(f>r)
	{
		printf("No elements to show\n");
		return;
	}
	for(int i=f;i<=r;i++)
		printf("ID=%d \n Name=%s\n",Q[i].id,Q[i].name);
}

int main()
{	
	E Q[max];
	int front=0,rear=-1,ch;
	while(1)
	{
		printf("Enter 1.Insert \n2.Delete \n3.Display \n4.Exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert(Q,&rear);
					break;
			case 2:delete(Q,&front,&rear);
					break;
			case 3:display(Q,front,rear);
					break;
			default:exit(0);
		}
	}
}
			
		
	
 




