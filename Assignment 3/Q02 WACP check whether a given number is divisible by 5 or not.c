#include<stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    if(a%5)
        printf("Not Divisible");
    else
        printf("Divisible");
    return 0;
}