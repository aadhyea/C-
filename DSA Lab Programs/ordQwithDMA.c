     //ordinary queue using dynamic memory allocation

#include<stdio.h>
#include<stdlib.h>

void insert(int *Q,int *f,int *r,int ele)
{
    (*r)++;
    if((*r)==0)
        Q[*r]=ele;
    else
    {
        Q=(int *)realloc(Q,sizeof(int)*((*r)+2));
        Q[*r]=ele;
    }
}

void delete(int *Q,int *f,int *r)
{
    int ele;
    if((*f)>(*r))
    {
        printf("Deletion not possible");
        return;
    }
    ele=Q[*f];
    (*f)++;
    printf("Deleted element is= %d\n",ele);
    Q=(int *)realloc(Q , sizeof(int)*((*r)+2));
}

void display(int *Q,int f,int r)
{
    if(f>r)
    {
        printf("No elements to display\n");
        return;
    }
    printf("elements are:\n");
    for(int i=f;i<=r;i++)
        printf("%d\t",Q[i]);
}

int main()
{
    int *Q,front=0,rear=-1,ch,ele;
    Q=(int *)malloc(sizeof(int));
    while(1)
    {
        printf("\n Enter 1.Insert \n2.Delete \n3.Display \n4.Exit \n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:printf("Enter ele\n");
                scanf("%d",&ele);
                insert(Q,&front,&rear,ele);
                break;
        case 2:delete(Q,&front,&rear);
                break;
        case 3:display(Q,front,rear);
                break;
        default:exit(0);
        }
    }
}
