#include<stdio.h>
int main()
{
    int HH,MM;
    printf("Enter a Time (HH:MM)  : ");
    scanf("%d:%d",&HH,&MM);

    printf("%d hour and %d Minute",HH,MM);

    return 0;
}