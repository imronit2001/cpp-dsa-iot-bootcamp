/*	Write a function to sort an array of int type values	*/
#include<stdio.h>
void sort(int *p,int N){
	int i,j,t;
	for(i=0;i<N-1;i++){
		for(j=0;j<N-1-i;j++){
			if(*(p+j)>*(p+j+1)){
				t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=t;
			}
		}
	}
}
int main()
{
	int a[5],i;
	printf("Enter 5 values : ");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	sort(a,5);
	for(i=0;i<5;i++)
		printf("%4d",a[i]);
 return 0;
}

