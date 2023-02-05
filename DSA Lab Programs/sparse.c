#include<stdio.h>
typedef 
struct sparse
{
    int row;
    int col;
    int val;
}S;

void accept(S a[],int m,int n)
{
	
	int i,j,elem,k=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Enter element for %d row and %d column\n",i,j);
			scanf("%d",&elem);
			if(elem!=0)
			{
				a[k].row=i;
				a[k].col=j;
				a[k].val=elem;
				k++;
			}
		}
	    a[0].row=n;
		a[0].col=m;
		a[0].val=k-1;
	}
}

void transpose(S a[],S at[])
{
	int k=1,i,j;
	for(i=0;i<a[0].col;i++)
	{
		for(j=1;j<=a[0].val;j++)
		{
			if(a[j].col==i)
			{
				at[k].row=a[j].col;
				at[k].col=a[j].row;
				at[k].val=a[j].val;
				k++;
			} 
		}
		at[0].row=a[0].col;
		at[0].col=a[0].row;
		at[0].val=a[0].val;
	}
}

void display(S a[])
{
	int k=1,i,j;
	for(i=0;i<a[0].row;i++)
	{
		for(j=0;j<a[0].col;j++)
		{
			if(i==a[k].row && j==a[k].col)
				{ printf("%d\t",a[k].val);
				  k++; }
			else
				printf("0\t");
		}
		 printf("\n");
	}
}

int main()
{
	S a[10],at[10];
	int m,n;
	printf("Enter number of rows amd columns");
	scanf("%d%d",&m,&n);
	accept(a,m,n);
	display(a);
	printf("Transpose is\n");
	transpose(a,at);
	display(at);
	return 0;
}			 							
								    
