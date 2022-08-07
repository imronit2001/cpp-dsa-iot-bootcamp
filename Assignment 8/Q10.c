/*
Enter n : 4
1234321
123 321
12   21
1     1
*/
#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		k=1;
		for(j=1;j<=n-i+1;j++)
			printf("%d",k++);
		for(j=1;j<=i-1;j++)
			printf(" ");
		
		if(i==1){
			k-=2;
			for(j=1;j<=n-i;j++)
			printf("%d",k--);
		}else{
			k-=1;
			for(j=1;j<=i-2;j++)
			printf(" ");
			for(j=1;j<=n-i+1;j++)
			printf("%d",k--);
		}
		printf("\n");
	}
 return 0;
}

