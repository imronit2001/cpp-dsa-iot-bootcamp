/*	Write a program in C to find the sum of rows and columns of a Matrix.	*/
#include<stdio.h>
int main()
{
	int a[3][3],i,j,s=0;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			printf("\n Enter a[%d][%d] : ",i+1,j+1);
			scanf("%d",&a[i][j]);
			s+=a[i][j];
		}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n Sum of elements = %d",s);
 return 0;
}

