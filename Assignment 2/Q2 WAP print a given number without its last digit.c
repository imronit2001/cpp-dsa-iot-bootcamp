#include<stdio.h>
int main(){
    
    int num,unit;
    printf("Enter a number : ");
    scanf("%d",&num);
    unit = num/10;
    printf("The number %d without its last digits is %d",num,unit);
    return 0;
}