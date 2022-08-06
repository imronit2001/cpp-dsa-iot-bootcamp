#include<stdio.h>
int main(){
    float r,area;
    scanf("%f",&r);
    area = 3.14*r*r;
    printf("Area of circle is %0.2f having the radius %0.2f",r,area);
    return 0;
}