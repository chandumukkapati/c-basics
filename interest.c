#include<stdio.h>
void main()
{
	int p,t,r,i;
	printf("enter the values of p,t,r");
	scanf("%d%d%d",&p,&t,&r);
	i=p*t*r/100;
	printf("the interest with %d,%d and %d is:%d",p,t,r,i);
	
}
