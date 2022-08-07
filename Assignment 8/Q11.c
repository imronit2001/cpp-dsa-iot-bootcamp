/*
Enter n : 5
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++)
			printf(" ");
		k=65;
		for(j=1;j<=i;j++)
			printf("%c",k++);
		k-=2;
		for(j=1;j<=i-1;j++)
			printf("%c",k--);
		printf("\n");
	}
 return 0;
}
