//reverse a number
#include<stdio.h>
int reverse(int a)
{
	int rem=0,rev=0;
	while(a>0)
	{
		rem = a%10;
		rev= rev*10 + rem;           
		a/=10;
	}	
	return rev;
}

int main()
{
	int a;
	printf("Enter any number\n");
	scanf("%d",&a);
	int ret=reverse(a);
	printf("After reversing, a=%d",ret);
	return 0;
}		
	
