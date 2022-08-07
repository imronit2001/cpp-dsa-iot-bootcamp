#include<stdio.h>
int main(){
    int month;
    printf("Enter month number from (1 to 12) : ");
    scanf("%d",&month);
    if(month>=1&&month<=12){
        if(month==2){
            printf("No of days 28 or 29");
        }else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
            printf("No of days 31");
        }else{
            printf("No of days 30");
        }
    }
    return 0;
}