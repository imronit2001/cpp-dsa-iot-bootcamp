#include<stdio.h>
int print(int n){
	if(n==1)
		return 1;
	if(n>1)
		return print(n-1)+n*2-1;
	
}
int main()
{
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	print(n);
	printf("Sum is %d",print(n));
 return 0;
}


