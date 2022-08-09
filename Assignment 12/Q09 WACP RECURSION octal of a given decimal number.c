#include<stdio.h>
void binary(int n){
	int r;
	if(n>0){
		r=n%8;
		n/=8;
		binary(n);
		printf("%d\t",r);
	}
}
int main()
{
	int n;
	printf("Enter decimal number : ");
	scanf("%d",&n);
	binary(n);
 return 0;
}

