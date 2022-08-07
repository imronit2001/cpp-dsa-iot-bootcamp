#include<stdio.h>
int main(){
    int i,n,s=0,c;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=1,c=0;c<n;i++){
        if(i%2){
            s+=i;
            c++;
        }
    }
    printf("Sum of %d even natural numbers is %d",n,s);
    return 0;
}