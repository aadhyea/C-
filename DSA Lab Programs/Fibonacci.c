#include<stdio.h>
int fibo(int,int);
int main()
{
	int n,x;
	printf("Enter any number to find\n");
	scanf("%d",&n);
	printf("Enter size\n");
	scanf("%d",&x);
	int fib=fibo(n,x);
	if(fib==0)
		printf("YES\n");
    else
    	printf("NO\n");
}

int fibo(int n,int x)
{
	int fib0=0,fib1=1,fib2=0;
	if(n==0 || n==1)
		return 0;
    else
		while(fib2<=x)
		{
			fib0=fib1;
			fib1=fib2;
			fib2=fib0+fib1;
			if(n==fib2)
				return 0;
		}
}						    			
