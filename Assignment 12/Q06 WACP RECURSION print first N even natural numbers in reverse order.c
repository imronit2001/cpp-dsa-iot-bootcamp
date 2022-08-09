#include<stdio.h>
void print(int n){
	printf("%d\t",n*2);
	if(n>1)
		print(n-1);
}
int main()
{
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	print(n);
 return 0;
}

