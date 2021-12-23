#include<stdio.h>
void main()
{
	int time,hours,min;
	printf("enter the time");
	scanf("%d",&time);
	hours=time/60,min=time%60;
	printf("the given %d in %dhr and %dmin" ,time,hours,min);
	
}
