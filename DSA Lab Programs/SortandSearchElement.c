#include<stdio.h>
void accept(int a[],int n)
{
	printf("Enter array\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}

void display(int a[],int n)
{
	printf("sorted eles\n");
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
} 

void bin_search(int a[],int n,int *key)
{
	int left=0,right=n-1,mid;
	while(left <= right)
	{
		mid=(left + right)/2;
		if(a[mid]==(*key))
		{
			printf("\n %d found at position %d",*key,mid+1);
			return ;
		}
		
		  else if((*key)<a[mid])
		  	right=mid-1;
		  else
		  	left = mid+1;
    }
    printf("Element not found\n");
}

void sort(int a[],int n)
{
	int i,j,temp;
	for(int i=0;i<n;i++)
	{	
		for(j=0;j<n-i-1;j++)
		{

			if(a[j] > a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	}
}
}

		

int main()
{
	int a[100],n,key;
	printf("Size = ");
	scanf("%d",&n);
	accept(a,n);
	sort(a,n);
	display(a,n);
	printf("\nElement to be found = \n");
	scanf("%d",&key);
	bin_search(a,n,&key);
	return 0;
}	
				    
				    		  					
