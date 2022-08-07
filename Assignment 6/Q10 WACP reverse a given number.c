#include<stdio.h>
int main(){
    int i,n,r,rev=0;
    printf("Enter n : ");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        n/=10;
        rev = rev*10+r;
    }
    printf("Reverse of %d is %d",n,rev);
    return 0;
}