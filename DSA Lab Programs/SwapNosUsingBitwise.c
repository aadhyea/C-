//EXTRA swap nos using bitswise
#include<stdio.h>
void add(int *a,int *b)
{
	
	 *a=(*a)^(*b);
	 printf("sum=%d\n",*a);
}

void swap(int *a,int *b)
{
	*b=(*a)^(*b);
	*a=(*a)^(*b);
	printf("after swap=%d , %d",*a,*b);
}	

int main()
{
	int a,b;
	printf("Enter 2 numbers to add\n");
	scanf("%d%d",&a,&b);
	add(&a,&b);
	swap(&a,&b);
	return 0;
}		
