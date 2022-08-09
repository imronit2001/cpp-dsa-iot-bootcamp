// Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area(int r){
	return 3.14*r*r;
}
int main()
{
	int r;
	float a;
	printf("Enter radius : ");
	scanf("%d",&r);
	a=area(r);
	printf("Area of Circle having radius %d is %0.2f sq mt",r,a);
 	return 0;
}


