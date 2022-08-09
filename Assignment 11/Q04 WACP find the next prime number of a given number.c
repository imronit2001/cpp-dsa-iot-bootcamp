/*	Write a function to find the next prime number of a given number. (TSRS)	*/
#include<stdio.h>
int isprime(n){
	int i;
	for (i = 2; i <= n / 2; ++i) {
	    if (n % i == 0)
	    	return 0;
	}
  	return 1;
}
int nextPrime(int prime){
	int found=0;
    if (prime <= 1)
        return 2;
    while (!found) {
        prime++;
        if (isprime(prime))
            found = 1;
    }
    return prime;
}
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("Next Prime Number of %d is %d",n,nextPrime(n));
 return 0;
}

