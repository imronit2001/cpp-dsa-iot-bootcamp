/*	Write a function to print first N terms of Fibonacci series (TSRN)	*/
#include<stdio.h>
void print(int n){
	int a=0,b=1,c,i;
	for(i=0;i<n;i++){
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
}
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	print(n);
 return 0;
}

