/*	Write a program in C to find the square of any number using the function	*/
#include<stdio.h>
int sq(int n){
	return n*n;
}
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("Square of %d is %d",n,sq(n));
 return 0;
}

