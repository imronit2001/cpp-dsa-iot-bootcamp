/*	Write a function to swap values of two in variables of calling function. (TSRS)	*/
#include<stdio.h>
void swap(int *x,int *y){
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
int main()
{
	int a,b;
	printf("Enter a and b : ");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("\n A = %d and B = %d",a,b);
 return 0;
}

