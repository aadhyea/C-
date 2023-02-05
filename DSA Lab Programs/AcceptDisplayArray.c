#include<stdio.h>
void accept(int a[],int n)
{
	printf("Enter array elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}

void display(int a[],int n)
{
	printf("The array elements are\n");
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
}

int main()
{
	int a[100],n;
	printf("Enter size of array\n");
	scanf("%d",&n);
	accept(a,n);
	display(a,n);
	return 0;
}				
				
