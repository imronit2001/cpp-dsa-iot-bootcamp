/*	Write a program in C to find the transpose of a given matrix	*/
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			printf("Enter a[%d][%d] : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			b[j][i] = a[i][j];
	
	printf("\n Matrix  : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n Transpose : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	
	
 return 0;
}

