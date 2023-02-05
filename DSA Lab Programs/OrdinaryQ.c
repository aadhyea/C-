#include<stdio.h>
#include<stdlib.h>
#define MAX 10

void Insert(int Q[],int *front,int *rear,int elem)
{
	if((*rear)==MAX-1)
	{
		printf("Overflow , cannot insert element\n");
		return;
	}
	(*rear)++;
	Q[*rear]=elem;
}

void Delete(int Q[],int *front,int *rear)
{
	if((*front)>(*rear))
	{
		printf("Underflow , no elements to delete\n");
		return;
	}
	printf("Element %d is deleted\n",Q[*front]);
	(*front)++;
}

void Display(int Q[],int front,int rear)
{
	if(front>rear)
		printf("No elements to display\n");
	else
	{	
		printf("Elements are: \n");
		for(int i=front;i<=rear;i++)
		{
			printf("%d\t",Q[i]);
		}
	}
}

int main()
{
	int Q[MAX],elem,ch;
	int rear=-1;
	int front=0;
	while(1)
	{
		printf("\nEnter 1.Insert element\n2.Delete element\n3.Display\n4.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter the element to insert\n");
					scanf("%d",&elem);
					Insert(Q,&front,&rear,elem);
					break;
			
			case 2: Delete(Q,&front,&rear);
					break;
				
			case 3: Display(Q,front,rear);
					break;
					
			default: exit(0);
		}
	}
	return 0;
}
