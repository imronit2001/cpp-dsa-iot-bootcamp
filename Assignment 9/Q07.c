/*
Program to take the value from the user as input electricity unit charges 
and calculate total electricity bill according to the given condition . Using the switch statement.
	For the first 50 units Rs. 0.50/unit
	For the next 100 units Rs. 0.75/unit
	For the next 100 units Rs. 1.20/unit
	For units above 250 Rs. 1.50/unit
	An additional surcharge of 20% is added to the bill.
*/

#include<stdio.h>
int main()
{
	int n;
	float bill;
	printf("Enter unit : ");
	scanf("%d",&n);
	switch(n){
		case 1 ... 50 :
						bill = n*0.5;
						break;
		case 51 ... 150 :
						bill = 50*0.5 + (n-50)*0.75;
						break;
		case 151 ... 250 :
						bill = 50*0.5 + 100*0.75 + (n-150)*1.2;
						break;
		default :
						bill = 50*0.5 + 100*0.75 + 100*1.2 + (n-250)*1.5;
						break;
	}
	bill = bill + bill/5.0;
	printf("Bill = %0.2f",bill);
 return 0;
}

