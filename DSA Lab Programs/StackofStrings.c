//A stack of strings

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 10

void push(char s[][max],int *top,char ele[])
{
	if((*top)==max-1)
	{
		printf("Underflow\n");
		return;
	}
	(*top)++;
	strcpy(s[*top],ele);
}

void pop(char s[][max],int *top)
{
	if((*top)==-1)
	{
		printf("Underflow\n");
		return;
	}
	
	
	char ele[20];
	strcpy(ele,s[*top]);
	printf("Deleted info is %s\n",ele);
	(*top)--;
	
}	

void display(char s[][max],int top)
{
	printf("The elements are:\n");
	for(int i=top;i>=0;i--)
	{
		printf("%s\t",s[i]);
	}
}

int main()
{
	char s[max][max];
	int top=-1,ch;
	char ele[20];
	
	while(1)
	{
		printf("\nEnter 1 to push\n2 to pop\n3 to display\n4 to exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                   printf("\nenter string to be enterd into the stack:");
                   scanf("%s",ele);
                   push(s,&top,ele);
                   break;
                   
            case 2:pop(s,&top);
                   break;
            case 3:display(s,top);
                   break;
            default:exit(0);
         }
     }
}

