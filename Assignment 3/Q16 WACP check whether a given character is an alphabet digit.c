#include<stdio.h>
int main(){
    char ch;
    printf("Enter an alphabet : ");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
        printf("Small Alphabet");
    else if(ch>='A'&&ch<='Z')
        printf("Capital Alphabet");
    else if(ch>='0'&&ch<='9')
        printf("Digit");
    else
        print("Other");
    return 0;
}