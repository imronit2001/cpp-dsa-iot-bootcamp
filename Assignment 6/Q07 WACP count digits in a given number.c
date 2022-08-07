#include<stdio.h>
int main(){
    int i,n,c=0,r;
    printf("Enter n : ");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        c++;
        n/=10;
    }
    printf("Number of digits in %d is %d",n,c);
    return 0;
}