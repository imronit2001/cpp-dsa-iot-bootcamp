#include<stdio.h>
int main(){
    int i;
    for(i=10;i>=1;i--)
    {
        if(i%2){
            printf("%d\t",i);
        }
    }
    return 0;
}