#include<stdio.h>
void main()
{
	int time,hours,min,sec;
	printf("enter the time");
	scanf("%d",&time);
	hours=time/3600;
	min=(time%3600)/60;
	sec=time%3600%60;
	printf("the given %d in %dhours,%dmin and %dsec is",time,hours,min,sec);
	
}
