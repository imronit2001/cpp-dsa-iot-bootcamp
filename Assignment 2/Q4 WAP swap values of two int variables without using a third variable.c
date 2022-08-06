#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("\nBefore Swapping A = %d , B = %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter Swapping A = %d , B = %d",a,b);
    return 0;
}