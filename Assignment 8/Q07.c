/*
Enter n : 5
**********
****  ****
***    ***
**      **
*        *
*/
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i+1;j++)
			printf("*");
		for(j=1;j<=i-1;j++)
			printf(" ");
	
		if(i==1){
			for(j=1;j<=n-i;j++)
			printf("*");
		}else{
			for(j=1;j<=i-2;j++)
			printf(" ");
			for(j=1;j<=n-i+1;j++)
			printf("*");
		}
		printf("\n");
	}
 return 0;
}

