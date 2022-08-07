#include<stdio.h>
int main(){
    int cost,selling;
    printf("Cost Amount : ");
    scanf("%d",&cost);
    printf("Selling Amount : ");
    scanf("%d",&selling);
    if(selling>cost)
        printf("Profit = %d",selling-cost);
    else if(cost>selling)
        printf("Lost = %d",cost-selling);
    else
        printf("Nuetral");
    return 0;
}