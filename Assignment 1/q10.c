#include<stdio.h>
int main()
{
    int DD,MM,YYYY;
    printf("Enter a date in (DD/MM/YY) : ");
    scanf("%d/%d/%d",&DD,&MM,&YYYY);

    printf("Day - %d , Month - %d , Year - %d",DD,MM,YYYY);

    return 0;
}