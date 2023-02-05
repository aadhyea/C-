#include<stdio.h>
void tower_hanoi(int n,char s,char t,char d)
{
	if(n==0) return;
	tower_hanoi(n-1,s,d,t);
	printf("Disc %d moved from %c to %c\n",n,s,d);
	tower_hanoi(n-1,t,s,d);
}

int main()
{
	int n;
	printf("Enter number of discs\n");
	scanf("%d",&n);
	tower_hanoi(n,'A','B','C');
}

