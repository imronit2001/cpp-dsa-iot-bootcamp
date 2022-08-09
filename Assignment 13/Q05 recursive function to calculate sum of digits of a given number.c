#include<stdio.h>
int print(int n){
	int r;
	if(n==0)
		return 0;
	if(n>0){
		r=n%10;
		n/=10;
		return print(n)+r;
	}
	
}
int main()
{
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	printf("Sum is %d",print(n));
 return 0;
}


