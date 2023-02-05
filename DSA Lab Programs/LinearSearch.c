#include<stdio.h>
void accept(int a[],int n)
{
	printf("enter elements");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}		
		
void linear_search(int a[],int n,int *key)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==(*key))
			printf("Element %d is found at location %d",*key,(i+1));
		else
			printf("Element not found\n");
		break;	
	}
}

int main()
{
	int array[100],n,key;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	accept(array,n);
	printf("Enter the element to be found\n");
	scanf("%d",&key);
	linear_search(array,n,&key);
	return 0;
}					
