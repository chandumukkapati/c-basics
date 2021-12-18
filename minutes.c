#include<stdio.h>
void main()
{
	int t,minutes,hours;
	printf("enter time t in minutes");
	scanf("%d",&t);
	hours=t/60,minutes=t%60;
	printf("%d hour %d minutes",hours,minutes);
}
