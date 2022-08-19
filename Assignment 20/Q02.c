/*	Write a function to swap strings of two char arrays of calling functions.	*/
#include<stdio.h>
#include<string.h>
void swap(char *x,char *y){
	char c[10];
	strcpy(c,x);
	strcpy(x,y);
	strcpy(y,c);
}
int main()
{
	char a[10],b[10];
	printf("Enter two strings : ");
	fgets(a,10,stdin);
	fgets(b,10,stdin);
	swap(a,b);
	printf("\na = %s and b = %s",a,b);
 return 0;
}

