/*	Write a program to calculate the sum of two matrices each of order 3x3	*/
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			printf("Enter a[%d][%d] : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			printf("Enter b[%d][%d] : ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			c[i][j] = a[i][j]+b[i][j];
	printf("\n Matrix a : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n Matrix b : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("\n Resultant matrix : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}

 return 0;
}

