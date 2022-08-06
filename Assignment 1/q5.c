#include<stdio.h>
int main(){
    char str[100] = "Ronit Singh";
    int len = 0;
    printf("%s%n", str, &len);
    printf(" = %d", len);
    return 0;
}