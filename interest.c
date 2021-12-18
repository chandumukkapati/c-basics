#include<stdio.h>
void main()
{
	float p,t,r,i;
	printf("enter three numbers");
	scanf("%f%f%f",&p,&t,&r);
	i=p*t*r/100;
	printf("simple interest with % .2f,% .2f and % .2f is :% .2f",p,t,r,i);
	
	
}
