#include<stdio.h>
int main(){
    float rupees;

	printf("Please enter rupees:");
	scanf("%f", &rupees);

	float dollars = rupees / 64;

	printf("%f Dollars", dollars);
    return 0;
}