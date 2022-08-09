/*	Write a function to print first N odd natural numbers. (TSRN)	*/
#include<stdio.h>
void func(int n){
	int i,c;
	for(i=1,c=1;c<=n;c++,i+=2)
		printf("%d\t",i);
}
int main()
{
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	func(n);
 return 0;
}

