/*	Write a function to check whether a given number is Prime or not. (TSRS)	*/
#include<stdio.h>
int isprime(n){
	int i;
	for (i = 2; i <= n / 2; ++i) {
	    if (n % i == 0)
	    	return 0;
	}
  	return 1;
}
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	isprime(n)?printf("%d is a Prime Number",n):printf("%d is not a Prime Number",n);
 return 0;
}

