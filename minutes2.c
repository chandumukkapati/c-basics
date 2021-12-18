#include<stdio.h>
void main()
{
	int hours,minutes,t;
	printf("enter hours and minutes");
	scanf("%d%d",&hours,&minutes),
	t=hours*60+minutes;
	printf("totaltime = %d minutes",t);
}
