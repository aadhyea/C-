#include<stdio.h>
void accept(int a[][100],int m,int n)
{
	printf("Enter elements\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}

void transpose(int a[][100],int b[][100],int m,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			b[j][i]=a[i][j];
		}
	}
}

void add(int a[][100],int b[][100],int c[][100],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}

void display(int a[][100],int m,int n)
{
	printf("elements are\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}printf("\n");
	}								
}

int main()
{
	int a[100][100],b[100][100]	,c[100][100],d[100][100],m,n,p,q;
	printf("Enter size for matrix 1\n");
	scanf("%d%d",&m,&n);
	printf("Enter size for matrix 2\n");
	scanf("%d%d",&p,&q);
	accept(a,m,n);
	accept(b,p,q);
	if(m==p && n==q)
	{
		add(a,b,c,m,n);
		display(c,m,n);
	}
	else
		printf("Addition not possible");
	printf("Transpose of resultant matrix\n");	
	transpose(c,d,m,n);
	display(d,m,n);		
}	

