/*	Write a function to print first N natural numbers (TSRN)	*/
#include<stdio.h>
void func(int n){
	int i;
	for(i=1;i<=n;i++)
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

