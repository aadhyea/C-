#include<stdio.h>
#define max 10
int F(char sym)
{
	switch(sym)
	{
		case '+':case '-':return 2;
		case '*':case '/':case '%':return 4;
		case '$':case '^':return 5;
		case '(':return 0;
		case '#':return -1;
		default:return 8;
	}
}

int G(char sym)
{
	switch(sym)
	{
		case '+':case '-':return 1;
		case '*':case '/':case '%':return 3;
		case '$':case '^':return 6;
		case '(':return 9;
		case ')':return 0;
		default:return 7;
	}
}

void push(char s[max],int *top,char ele)
{
	if((*top)==max-1)
	{
		printf("Cannot push\n");
		return;
	}
	(*top)++;
	s[*top]=ele;
}

int pop(char s[max],int *top)
{
	if((*top)==-1)
	{
		printf("Cannot pop\n");
		
	}
	int ele=s[*top];
	(*top)--;
	return ele;
}

void infix_post(char infix[],char postfix[])
{
	int top=-1,i=0,j=0;
	char s[max],sym;
	push(s,&top,'#');
	while(infix[i]!=0)
	{
		sym=infix[i];
		while(F(s[top])>G(sym))
			postfix[j++]=pop(s,&top);
		if(F(s[top])!=G(sym))
			push(s,&top,sym);
		else
			pop(s,&top);
		i++;
	}
	
	while(top!=0)
		postfix[j++]=pop(s,&top);
	postfix[j]='\0';
}

void display(char s[max],int top)
{
	if(top==max-1)
		return;
	for(int i=top;i>0;i++)
		printf("%c",s[i]);
}

int main()
{
	char infix[20],postfix[20];
	printf("Enter infix expression\n");
	scanf("%s",infix);
	infix_post(infix,postfix);
	printf("postfix expression= %s \n",postfix);
}

