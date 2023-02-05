#include<stdio.h>
void check_prime(int n)
{
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
			count++;
	}
	if(count==2)
		printf("%d is prime\n",n);
	else
		printf("%d is not prime\n",n);
}

int main()
{
	int a;
	printf("enter amy number\n");
	scanf("%d",&a);
	check_prime(a);
	return 0;
}	
						
