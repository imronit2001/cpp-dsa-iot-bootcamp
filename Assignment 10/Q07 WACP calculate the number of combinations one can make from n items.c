/*	Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)	*/
#include<stdio.h>
int fact(int n){
	int f=1,i=1;
	while(i<=n){
		f*=i;
		i++;
	}
	return f;
}
int main()
{
	int n,r,c;
	printf("Enter n : ");
	scanf("%d",&n);
	printf("Enter r : ");
	scanf("%d",&r);
	if(n<r){
		printf("n must be greater than r");
		return 0;
	}
	c=fact(n)/(fact(r)*fact(n-r));
	printf("No of combinations = %d",c);
 return 0;
}

