#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("\nBefore Swapping A = %d , B = %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter Swapping A = %d , B = %d",a,b);
    return 0;
}