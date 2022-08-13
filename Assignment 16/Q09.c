/*	Write a program in C to accept a matrix and determine whether it is a sparse matrix	*/
#include<stdio.h>
int main()
{
	int a[3][3],i,j,zero=0,nonzero=0;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			printf("\n Enter a[%d][%d] : ",i+1,j+1);
			scanf("%d",&a[i][j]);
			if(a[i][j]==0)
				zero++;
			else
				nonzero++;
		}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	if(zero>nonzero)
		printf("Given Matrix is a sparse matrix");
	else
		printf("Given Matrix is not a sparse matrix");
 return 0;
}

