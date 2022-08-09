/*	Write a function to check whether a given number contains a given digit or not.
(TSRS)	*/
#include<stdio.h>
int find(int n,int digit){
	int r;
	for(;n>0;n/=10){
		r=n%10;
		if(r==digit)
			return 1;
	}
	return 0;
}
int main()
{
	int n,digit;
	printf("Enter number : ");
	scanf("%d",&n);
	printf("Enter digit to search : ");
	scanf("%d",&digit);
	find(n,digit)?printf("Yes.. %d contains %d",n,digit):printf("No.. %d does not contains %d",n,digit);
 return 0;
}

