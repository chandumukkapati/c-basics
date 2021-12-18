#include<stdio.h>
void main()
{
	int r;
	float area,perimeter;
	printf("enter the radius of the circle");
	scanf("%d",&r);
	area=3.14*r*r;
	perimeter=2*3.14*r;
	printf("area of the circle with radius %d  is :%f",r,area);
	printf("\nperimeter of the circle with radius %d is :%f",r,perimeter);
}
