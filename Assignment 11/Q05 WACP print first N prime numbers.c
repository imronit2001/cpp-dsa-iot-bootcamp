/*	Write a function to print first N prime numbers (TSRN)	*/
#include<stdio.h>
int prime(int n){
	int i;
	for (i = 2; i <= n / 2; ++i) {
	    if (n % i == 0)
	    	return 0;
	}
  	return 1;
}
void print(int n){
	int i=3,c;
	for(c=0;c<n;i++){
		if(prime(i)){
			printf("%d\t",i);
			c++;
		}
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

