//simple calc
#include<stdio.h>
int calc(int a,int  b, char *c)
{
	int result;
	switch(*c)
	{
		case '+': result=a+b;
				  break;
		
		case '-': result=a-b;
				  break;		  
				  
		case '*': result=a*b;
				  break;
				  		  
		case '/': result=a/b;
				  break;
				  
		case '>': result=a>>1;
				  break;
				  
		case '~': result= ~a;
				  break;		
				 
		case '&': result=a&b;
				  break;		    		  		  		  		  
				  
		case '|': result=a||b;
				  break;	
				  
		default : printf("INVALID\n");
					break;
	}
	return result;
}

int main()
{
	int a,b;
	char ch;
	printf("Enter the symbol of the operation you want to perform\n");
	scanf("%c",&ch);
	printf("Enter 2 opernds\n");
	scanf("%d%d",&a,&b);
	int res=calc(a,b,&ch);
	printf("Result= %d",res);
	
	
	
	return 0;
}								  	  
