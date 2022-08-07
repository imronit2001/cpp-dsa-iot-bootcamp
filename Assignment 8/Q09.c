/*
Enter n : 4
1234321
 12321
  121
   1
*/
#include<stdio.h>
int main(){
	int i,j,n,k;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i-1;j++)
			printf(" ");
		k=1;
		for(j=1;j<=n-i+1;j++)
			printf("%d",k++);
		k-=2;
		for(j=1;j<=n-i;j++)
			printf("%d",k--);
		printf("\n");
	}
 return 0;
}

