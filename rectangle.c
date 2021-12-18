#include<stdio.h>
void main()
{
	int length,breadth,area,perimeter;
	printf("emter length and breadth of a rectangle");
	scanf("%d%d",&length,&breadth);
	area=length*breadth;
	perimeter=2*(length+breadth);
	printf("area of the rectangle with %d and %d is:%d",length,breadth,area);
	printf("\nperimeter of the rectangle with %d and %d is:%d",length,breadth,perimeter);
	
}
