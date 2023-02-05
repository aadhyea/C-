#include<stdio.h>
int largest(int x,int y,int z)
{
	if(x>y && x>z)
	{   printf("The largest is %d\n",x);
		if(y>z)
			{ 
				printf("%d is second largest\n",y);
				printf("%d is third largest\n",z);
			}	
		else
			{
				printf("%d is second largest\n",z);
				printf("%d is third largest\n",y);	
			}
	}
	else if(y>z && y>x)
	{	printf("The largest is %d\n",y);
		if(x>z)
			{
				printf("%d is second largest\n",x);
				printf("%d is third largest\n",z);
			}
		else
			{
				printf("%d is second largest\n",z);
				printf("%d is third largest\n",x);
			}
	}	
	else 
		{
			printf("The largest is %d\n",z);
			if(x>y)
			{
				printf("%d is second largest\n",x);
				printf("%d is third largest\n",y);
			}
	    else
	    	{
	    		printf("%d is second largest\n",y);
				printf("%d is third largest\n",x);
			}
	 }
}
int main()
{
	int a,b,c;
	printf("Enter 3 numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	largest(a,b,c);
	return 0;
}						
					
