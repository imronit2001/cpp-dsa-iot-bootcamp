#include<stdio.h>
int main(){
    int i;
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\t",10-i);
    return 0;
}