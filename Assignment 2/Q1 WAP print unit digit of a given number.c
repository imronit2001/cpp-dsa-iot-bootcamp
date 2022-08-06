#include<stdio.h>
int main(){
    int num,unit;
    printf("Enter a number : ");
    scanf("%d",&num);
    unit = num%10;
    printf("Unit digit of %d is %d",num,unit);
    return 0;
}