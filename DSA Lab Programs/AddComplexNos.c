#include<stdio.h>
void complex(float r1,float i1,float r2,float i2)
{
	float r,i;
	r=r1+r2;
	i=i1+i2;
	printf("Complex number is %f + i %f",r,i);
}
int  main()
{
	float real1,real2,img1,img2;
	printf("Enter complex no 1\n");
	scanf("%f%f",&real1,&img1);	
	printf("Enter complex no 2\n");
	scanf("%f%f",&real2,&img2);
	complex(real1,img1,real2,img2);
	return 0;
}		
