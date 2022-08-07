#include<stdio.h>
int main(){
    int a,b,c,d,e,pass=0;
    printf("Enter marks of 5 subjects : ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>33&&b>33&&c>33&&d>33&&e>33)
        pass = 1;
    pass?printf("Passed"):printf("Failed");
    return 0;
}