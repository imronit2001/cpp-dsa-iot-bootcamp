/*
Enter n : 6
ABCDEFEDCBA
ABCDE EDCBA
ABCD   DCBA
ABC     CBA
AB       BA
A         A
*/
#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		k=65;
		for(j=1;j<=n-i+1;j++)
			printf("%c",k++);
		for(j=1;j<=i-1;j++)
			printf(" ");
		
		if(i==1){
			k-=2;
			for(j=1;j<=n-i;j++)
			printf("%c",k--);
		}else{
			k-=1;
			for(j=1;j<=i-2;j++)
			printf(" ");
			for(j=1;j<=n-i+1;j++)
			printf("%c",k--);
		}
		printf("\n");
	}
 return 0;
}

