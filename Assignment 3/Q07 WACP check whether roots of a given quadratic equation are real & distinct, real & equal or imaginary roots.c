#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter a b c : ");
    scanf("%d%d%d",&a,&b,&c);
    d = b*b - 4*a*c ;
    if(d>0)
        printf("Real and Unequal Roots");
    else if(d<0)
        printf("Roots are imaginary");
    else
        printf("Real and Equal Roots");
    return 0;
}