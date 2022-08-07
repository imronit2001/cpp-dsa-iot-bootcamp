#include<stdio.h>
int main(){
    int i;
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i>=10;i++)
    {
        printf("\n %d X %d = %d",n,i,5*i);
    }
    return 0;
}