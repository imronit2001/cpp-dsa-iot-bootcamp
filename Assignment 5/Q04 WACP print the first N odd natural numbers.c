#include<stdio.h>
int main(){
    int i;
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2){
            printf("%d\t",i);
        }
    }
    return 0;
}