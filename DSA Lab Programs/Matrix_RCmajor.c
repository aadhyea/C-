#include<stdio.h>
void accept(int a[][100],int m,int n)
{
	printf("Enter elemenrs\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}

void rc_major(int a[][100],int r[],int c[],int m,int n)
{
	int i,j,k=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			r[k]=a[i][j];
			k++;
		}
	}
	k=0;

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[k]=a[j][i];
			k++;
		}
	}


}

void result(int a[][100],int r[],int c[],int m,int n)
{
	int i,j,k=0;
	printf("RESULTS\n");
	printf("Row major\n");
	 for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", r[k++]);
        }
        printf("\n");
    }
    k = 0;
    printf("Coloumn major\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", c[k++]);
        }
        printf("\n");
    }
}	
	

int main()
{
	int a[100][100],r[100],c[100],m,n;
	printf("Enter size of matrix\n");
	scanf("%d%d",&m,&n);
	accept(a,m,n);
	printf("Row major\n");
	rc_major(a,r,c,m,n);
	result(a,r,c,m,n);
	return 0;
}							
