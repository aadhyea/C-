#include<stdio.h>
int factorial(int n)
{
	int fact=1;
	if(n==0)
		return 0;
	for(int i=1;i<=n;i++)
		fact=fact*i;
	return fact;
}
int main()
{
	int n;
	printf("Enter a number \n");
	scanf("%d",&n);
	printf("The factorial of %d is %d",n,factorial(n));
}		
		
