/*	Write a function to calculate the factorial of a number. (TSRS)	*/
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
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	printf("Factorial of %d is %d",n,fact(n));
 return 0;
}

