#include<stdio.h>
#include<string.h>
typedef struct emp
{
	int id;
	char name[20];
}E;

void accept(E e[],int n)
{	
	printf("Enter details\n");
	for(int i=0;i<n;i++)
	{	printf("Enter Id and name of %d:\n",i);
		scanf("%d %s",&(e[i].id),e[i].name);
	}
		
}


void lsearch_name(E e[],char name[20],int n)
{
	for(int i=0;i<n;i++)
	{
		int r=strcmp(name,e[i].name);
		if(r==0)
			printf("Name match found in structure %d",i+1);
	}		
}

void bsearch_id(E e[],int n)
{
  int l=0,r=n-1,mid,key;
  printf("enter the ID to be searched");
  scanf("%d",&key);
  while(l<=r)
  {
    mid=(l+r)/2;
    if(e[mid].id==key)
    {
      printf("the element is found at %d\n",mid+1);
      return;
    }
    else if(e[mid].id>key)
    {
      r=mid-1;
    }
    else
    {
      l=mid+1;
    }
  }
  printf("element is not found");
}
void display(E e[],int n)
{
	for(int i=0;i<n;i++)
		printf("ID= %d \nNAME = %s \n",e[i].id,e[i].name);
	
}

int main()
{
	E e[10];
	int n;
	char name[20];
	printf("Enter number of employees\n");
	scanf("%d",&n);
	accept(e,n);
	display(e,n);
	printf("Enter name to be searched");
	scanf("%s",name);
	lsearch_name(e,name,n);
	bsearch_id(e,n);
	return 0;		
}		
	
	
