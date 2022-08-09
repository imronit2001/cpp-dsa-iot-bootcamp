/*	Write a function to print PASCAL Triangle. (TSRN)	*/
#include<stdio.h>
int fact(int n){
	int f=1,i=1;
	while(i<=n){
		f*=i;
		i++;
	}
	return f;
}
int comb(int n,int r){
	return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
	int n,i,j;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			printf("\t");
		}
		for(j=0;j<=i;j++){
			printf("%d\t\t",comb(i,j));
		}
		printf("\n");
	}
 return 0;
}

