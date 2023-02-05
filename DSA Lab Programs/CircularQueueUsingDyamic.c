//circular queue using dynamic
#include<stdio.h>
#include<stdlib.h>

int max=10;
int * insert_CQ_D(int *q,int *f,int *r,int *count,int ele)
{
	int i,j;
	if((*count)==max)
	{
		int *p;
		max*=2;
		p=(int *)malloc(sizeof(int)*max);
		if((*f)==0 && (*r)==max-1)
		{
			for(int i=*f;i<=(*r);i++)
				p[i]=q[i];
		}
		
		else
		{
			for(i=0,j=(*f);j<max/2;i++,j++)
				p[i]=q[j];
			for(j=0;j<=(*r);i++)
				p[j++]=q[i];
			
		}  

		(*f)=0;
		(*r)=(max/2)-1;

		(*count)++;
		(*r)=((*r)+1)%max;
		p[*r]=ele;
		free(q);
		return p;
	}
	
	else
	{
		*r=((*r)+1)%max;
		q[*r]=ele;
		(*count)++;
		return q;
	}
} 



void delete(int *q,int *f,int *count)
{
	if((*count)==0)
	{
		printf("NO elements\n");
		return;
	}
	
	printf("Deleted element is %d\n",q[*f]);
	(*f)=((*f)+1)%max;
	(*count)--;
}

void display(int *q,int f,int r,int count)
{
	
	if(count==0)
	{
		printf("No elements to display\n");
		return;
	}
	int i=f;
	printf("Elements are:\n");
	while(count--)
	//for(int i=f;count>0;i=(i+1)%max,count--)
	{
		printf("%d\t",q[i]);
		i=(i+1)%max;
	}
}

int main()
{
	int *q,count=0,front=0,rear=-1,elem,n;
	q=(int *)malloc(sizeof(int)*max);
	while(1)
	{
		printf("Enter 1-to insert\n2-to delete\n3-to display\n4-to exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:printf("Enter the element to be inserted : ");
				scanf("%d",&elem); 
				q=insert_CQ_D(q,&front,&rear,&count,elem);
			break;
			case 2:delete(q,&front,&count);
			break;
			case 3:display(q,front,rear,count);
			break;
			case 4:exit(0);
		}
	}
	return 0;
}
 


