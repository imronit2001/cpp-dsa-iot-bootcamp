/*	Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
function.	*/
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
	int n,i,s=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s = s + fact(i)/2;
	}
	printf("Sum of series is %d",s);
 return 0;
}

