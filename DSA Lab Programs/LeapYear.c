#include<stdio.h>
int check_leap(int year)
{
	if(year%4==0 || year%100==0 || year%400==0)
		return 0;
	else
		return -1;
}
int main()
{
	int yr;
	printf("Enter any year\n");
	scanf("%d",&yr);
	int ret=check_leap(yr);
	if(ret==0)
		printf("%d is leap",yr);
	else
		printf("Year is not leap");
	return 0;
}						
