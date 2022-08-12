/*	Write a function in C to merge two arrays of the same size sorted in descending
order	*/
#include<stdio.h>
#define N 5
#define S 10
void sort(int arr[]){
	int i,j,t;
	for(i=0;i<N-1;i++){
		for(j=0;j<N-i-1;j++){
			if(arr[j]<=arr[j+1]){
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
}
void merge(int a[],int b[],int c[]){
	int i=0,j=0,k=0;
	for(;k<N+N;k++){
		if(i>=N){
			while(k<S){
				c[k]=b[j];
				j++;
				k++;
				if(k==10)	
					break;
			}
			
		}else
		if(j>=N){
			while(k<S){
				c[k]=a[i];
				i++;
				k++;
				if(k==10)	
					break;
			}
		}else
		if(a[i]<b[j])
			c[k]=a[i++];
		else
			c[k]=b[j++];
	}
	printf("\nSorted Merged Array : ");
	for(i=0;i<S;i++)
		printf("%d\t",c[i]);
}
int main()
{
	int a[N],b[N],c[S],i;
	printf("Enter %d numbers for first array : ",N);
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter %d numbers for second array : ",N);
	for(i=0;i<N;i++){
		scanf("%d",&b[i]);
	}
	sort(a);
	sort(b);
	merge(a,b,c);
	printf("\nA Array : ");
	for(i=0;i<N;i++)
		printf("%d\t",a[i]);
	printf("\nB Array : ");
	for(i=0;i<N;i++)
		printf("%d\t",b[i]);
	sort(c);
	printf("\nSorted Merged Array : ");
	for(i=0;i<S;i++)
		printf("%d\t",c[i]);
	
 return 0;
}

