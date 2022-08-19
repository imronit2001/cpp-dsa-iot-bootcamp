/*	Write a program in C to print or display the upper triangular of a given matrix.	*/
#include<stdio.h>
int main()
{
	int a[3][4],i,j,s=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter array element a[%d][%d]\t",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(j>i)
				a[i][j]=0;
				
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
 return 0;
}

