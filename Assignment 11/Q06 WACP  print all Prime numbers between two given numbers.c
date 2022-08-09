/*	Write a function to print all Prime numbers between two given numbers. (TSRN)	*/
#include<stdio.h>
int prime(int n){
	int i;
	for (i = 2; i <= n / 2; ++i) {
	    if (n % i == 0)
	    	return 0;
	}
  	return 1;
}
void print(int a,int b){
	int i=a;
	for(;i<=b;i++){
		if(prime(i)){
			printf("%d\t",i);
		}
	}
		
}
int main()
{
	int a,b;
	printf("Enter range a,b : ");
	scanf("%d%d",&a,&b);
	print(a,b);
 return 0;
}

