#include<stdio.h>
int main()
{
	int angle1,angle2,angle3,total=180;
	printf("Give angle 1 of Triangle:");
	scanf("%d",&angle1);
	printf("Give angle 2 of Triangle:");
	scanf("%d",&angle2);
	angle3=total-angle1-angle2;
	printf("The Angle 3 of Triangle is:%d ",angle3);
}
/*
		Output: 
		Give angle 1 of Triangle:30
		Give angle 2 of Triangle:20
		The Angle 3 of Triangle is:130
*/