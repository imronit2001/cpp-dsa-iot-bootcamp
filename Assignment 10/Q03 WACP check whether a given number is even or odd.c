/* Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)	*/
#include<stdio.h>
int even(int n){
	return n%2;
}
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	even(n)?printf("ODD Number"):printf("EVEN Number");
 return 0;
}

