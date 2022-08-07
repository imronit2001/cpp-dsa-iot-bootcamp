#include<stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    if(a&1)
        printf("Odd Number");
    else
        printf("Even Number");
    return 0;
}