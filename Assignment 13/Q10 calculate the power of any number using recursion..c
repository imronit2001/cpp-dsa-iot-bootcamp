#include<stdio.h>
int power(int n,int a){
	if(a==0)
		return 1;
	else
		return n*power(n,a-1);
}
int main()
{
	int n,a;
	printf("Enter a number and power : ");
	scanf("%d%d",&n,&a);
	printf("%d^%d = %d",n,a,power(n,a));
 return 0;
}

