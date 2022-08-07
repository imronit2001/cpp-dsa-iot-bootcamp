#include<stdio.h>
int main(){
    char ch;
    printf("Enter an alphabet : ");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
        printf("Small Alphabet");
    else if(ch>='A'&&ch<='Z')
        printf("Capital Alphabet");
    else
        printf("Other");
    return 0;
}