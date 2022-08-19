/*	Write a program in C to find the sum of left diagonals of a matrix	*/
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
			if(i==2-j)
				s+=a[i][j];
				
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n Sum of Right Diagonals is %d",s);
 return 0;
}

