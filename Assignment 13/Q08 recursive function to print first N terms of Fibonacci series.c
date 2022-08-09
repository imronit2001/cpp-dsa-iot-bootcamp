#include<stdio.h>
void fibo(int n){    
    static int n1=0,n2=1,n3;    
    if(n>0){    
    	printf("%d ",n1);    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         fibo(n-1);    
    }    
} 
int main()
{
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	fibo(n);
 return 0;
}


