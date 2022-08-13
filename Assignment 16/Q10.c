/*	Write a program in C to find the row with maximum number of 1s	*/
#include<stdio.h>
int main()
{
	int a[3][3],i,j,max,c,k;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			printf("\n Enter a[%d][%d] : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	max=-1;
	k=0;
	for(i=0;i<3;i++){
		c=0;
		for(j=0;j<3;j++){
			if(a[i][j]==1)
				c++;
		}
		if(c>k){
			k=c;
			max=i;
		}
		printf("\n");
	}
	if(max==-1)
		printf("\n Given Array doesn't contain 1");
	else
		printf("\n Row %d has maximum no of 1",max);
 return 0;
}

