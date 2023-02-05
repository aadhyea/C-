#include<stdio.h>
void accept(int a[],int n)
{
	printf("Enter array elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}

void add(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
		sum=sum+a[i];
	printf("Sum of elements=%d\n",sum);
}

int main()
{
	int a[100],n;
	printf("Enter size of array\n");
	scanf("%d",&n);
	accept(a,n);
	add(a,n);
	return 0;
}					
