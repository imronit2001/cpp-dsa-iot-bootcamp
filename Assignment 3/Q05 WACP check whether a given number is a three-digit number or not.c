#include<stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);

    a/=10;
    a/=10;
    a/=10;
    if(a){
        printf("It is not a three digit number");
    }else{
        printf("It is three digit number");
    }

    return 0;
}