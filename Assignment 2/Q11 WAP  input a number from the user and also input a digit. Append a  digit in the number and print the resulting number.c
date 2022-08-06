#include<stdio.h>
int main(){
    int num,digit;
    printf("Enter a number and digit : ");
    scanf("%d%1d",&num,&digit);
    num = num*10 + digit;
    printf("Output : %d",num);
    return 0;
}