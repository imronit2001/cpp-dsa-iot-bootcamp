/*	Write a function to calculate HCF of two numbers. (TSRS)
	*/
// C program to find GCD of two numbers
#include <math.h>
#include <stdio.h>
 
// Function to return gcd of a and b
int gcd(int a, int b)
{
    int result = fmin(a, b); // Finding minimum of a nd b
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}
 
// Driver program to test above function
int main()
{
    int a,b;
    printf (" \n Enter any two positive numbers to get the HCF of: \n ");  
    scanf("%d%d",&a,&b);
    printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
    return 0;
}
