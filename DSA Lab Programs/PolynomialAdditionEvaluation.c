#include<stdio.h>
typedef struct poly
{
    int cf,ex;
}P;

void accept(P p[],int n)
{
    
    for(int i=0;i<n;i++)
    {   
        p[i].cf=0;
        p[i].ex=0;
        printf("Enter the coeffecient and power\n");
        scanf("%d%d",&p[i].cf,&p[i].ex);
    }
}

void display(P p[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(p[i].cf>0)
            printf("+%d x^ %d",p[i].cf,p[i].ex);
        else
             printf("%d x^ %d",p[i].cf,p[i].ex);

    }
}

int add(P p1[],P p2[],P res[],int n1,int n2)
{
    int k=1,i,j;
    
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(p1[i].ex==p2[j].ex)
            {

                res[k].cf=p1[i].cf+p2[j].cf;
                res[k].ex=p1[i].ex;
                k++;
                p2[j].cf=-999;
                break;
            }
        }
        if(j==n2)
        {
            res[k].cf=p1[i].cf;
            res[k].ex=p1[i].ex;
        }

    }
    for(i=0;i<n2;i++)
    {
        if(p2[i].cf!=-999)
        {
            res[k].cf=p2[i].cf;
            res[k].ex=p2[i].ex;
            k++;
        }
    }
    return k;
}

int main()
{
    P p1[10],p2[10],res[10];
    int n1,n2;
    printf("No of terms in poly 1 and 2\n");
    scanf("%d%d",&n1,&n2);
    printf("For Polynomial 1\n");
    accept(p1,n1);
    printf("\n");
    printf("For polynomial 2\n");
    accept(p2,n2);
    display(p1,n1);
    printf("\n");
    display(p2,n2);
    int r=add(p1,p2,res,n1,n2);
    printf("\n");
    display(res,r);
}