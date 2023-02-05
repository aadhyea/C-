#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max_size 20
struct emp
{
	int id;
	char name;
}e[max_size];

typedef struct emp E;
static int i=0;

void push(E s1[max_size],int *top,int id,char name[])
{
	
	if((*top)==max_size-1)
	{
		printf("Overflow\n");
		return;
	}	
	(*top)++;
	e[i].id=id;
	strcpy(e[i].name,name);
	s1[*top]=e[i++];
}

void pop(E s1[max_size],int *top)
{
	if((*top)==-1)
	{
		printf("Underflow\n");
		return;
	}
	printf("Deleted info is %d\n %s\n",s1[*top].id,s1[*top].name);
	(*top)--;
	
}	

void display(E s1[max_size],int top)
{
	printf("The elements are:\n");
	for(int i=top;i>=0;i--)
		printf("%d\n %s\n",s1[i].id,s1[i].name);
}

int main()
{
	E s1[max_size];
	int top=-1,id,ch;
	char name[20];
	
	while(1)
	{
		printf("\nEnter 1 to push\n2 to pop\n3 to display\n4 to exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                   printf("\nenter ID and name to be enterd into the stack:");
                   scanf("%d %s",&id,name);
                   push(s1,&top,id,name);
                   break;
                   
            case 2:pop(s1,&top);
                   break;
            case 3:display(s1,top);
                   break;
            default:exit(0);
         }
	}
}
