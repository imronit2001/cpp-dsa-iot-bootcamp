/*	Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN)	*/
#include<stdio.h>
#include<math.h>
void prime(int n){
	int i;
	// Print the number of 2s that divide n
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }
 
    // n must be odd at this point.  So we can skip
    // one element (Note i = i +2)
    for (i = 3; i <= sqrt(n); i = i + 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
 
    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        printf("%d ", n);
}
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	prime(n);
 return 0;
}

