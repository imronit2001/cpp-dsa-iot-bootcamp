#include<stdio.h>
int main(){
    int a=0,b=1,c,n,i,fibo=0;
    printf("Enter n : ");
    scanf("%d",&n);
    for(;n>a;){
        if(a==n)
            fibo = 1;
        c=a+b;
        a=b;
        b=c;
    }
    if(fibo){
        printf("%d is in fibonacci series",n);
    }else{
        printf("%d is not in fibonacci series",n);
    }
    return 0;
}