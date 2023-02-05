//Circular Queue

#include<stdio.h>
#include<stdlib.h>
#define max_size 5

void insert_CQ(int CQ[],int *f,int *r,int *count)			//f=front , r=rear
{
	int ele;
	if((*count)==max_size)
	{
		printf("Overflow\n");
		return;
	}
	(*r)=((*r)+1)%max_size;
	printf("Enter element to be inserted\n");
	scanf("%d",&ele);
	CQ[*r]=ele;
	(*count)++;
}

void delete_CQ(int CQ[],int *f,int *r,int *count)
{
	if((*count)==0)
	{
		printf("Underflow\n");
		return;
	}
	int ele;
	ele=CQ[*f];
	printf("Element to be deleted is %d\n",ele);
	(*f)=((*f)+1)%max_size;
	(*count)--;
}

void display(int CQ[],int f,int r,int count)
{
	if(count==0)
	{
		printf("No elements to display\n");
		return;
	}
	printf("The elements are\n");
	for(int i=f;count>0;i=(i+1)%max_size,count--)
	{
		printf("%d\t",CQ[i]);
	}
}

int main()
{
	int CQ[max_size],front=0,rear=-1,count=0,ch;
	while(1)
	{
		printf("Enter 1.Insert \n2.Delete \n3.Display \n4.Exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert_CQ(CQ,&front,&rear,&count);
					break;
			case 2:delete_CQ(CQ,&front,&rear,&count);
					break;
			case 3:display(CQ,front,rear,count);
					break;
			default:exit(0);
		}
	}
}
