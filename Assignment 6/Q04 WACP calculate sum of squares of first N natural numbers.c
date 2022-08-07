#include<stdio.h>
int main(){
    int i,n,s=0;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+i*i;
    }
    printf("Sum of squares of %d natural numbers is %d",n,s);
    return 0;
}