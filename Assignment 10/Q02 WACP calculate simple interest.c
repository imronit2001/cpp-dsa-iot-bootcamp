// Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float si(int,int,int);
int main()
{
	int p,r,t;
	printf("Enter Principal, rate, time : ");
	scanf("%d%d%d",&p,&r,&t);
	printf("Simple Interest = %0.2f",si(p,r,t));
 return 0;
}
float si(int p,int r,int t){
	return p*r*t/100.0;
}

