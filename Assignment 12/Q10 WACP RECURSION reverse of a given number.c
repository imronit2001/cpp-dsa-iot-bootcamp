#include<stdio.h>
void reverse(int n){
	int r;
	if(n>0){
		r=n%10;
		n/=10;
		printf("%d\t",r);
		reverse(n);
	}
}
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	reverse(n);
 return 0;
}

