/*	Write a function in C to count the frequency of each element of an array.	*/
#include<stdio.h>
#define N 10
int func(int arr[],int temp[]){
	int i,j,k=0;
	for(i=0;i<N;i++){
		for(j=0;j<i;j++){
			if(arr[i]==arr[j])
				break;
		}
		if(i==j)
			temp[k++]=arr[i];
	}
	return k;
}
void find(int arr[],int temp[], int k){
	int i,j,count;
	for(i=0;i<k;i++){
		count=0;
		for(j=0;j<N;j++){
			if(temp[i]==arr[j])
				count++;
		}
		printf("\n %d occurs %d times",temp[i],count);
	}
}
int main()
{
	int arr[N],temp[N],i,count,k;
	printf("Enter %d numbers ",N);
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	k = func(arr,temp);
	find(arr,temp,k);
 return 0;
}

