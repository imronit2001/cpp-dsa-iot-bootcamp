/*
Enter n : 5
        *
      *   *
    *       *
  *           *
* * * * * * * * *

*/
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++)
			printf("  ");
		for(j=1;j<=i;j++)
		{
			if(j==1||i==n)
				printf("* ");
			else
				printf("  ");
		}
		for(j=1;j<=i-1;j++)
		{
			if(j==i-1||i==n)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
 return 0;
}

