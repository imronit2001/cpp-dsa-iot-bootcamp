/*
Enter n : 5
    1
   121
  12321
 1234321
123454321
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
		k=1;
		for(j=1;j<=i;j++)
			printf("%d",k++);
		k-=2;
		for(j=1;j<=i-1;j++)
			printf("%d",k--);
		printf("\n");
	}
 return 0;
}
