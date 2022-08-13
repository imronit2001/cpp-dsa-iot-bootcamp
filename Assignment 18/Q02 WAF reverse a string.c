/*	Write a function to reverse a string.	*/
#include<stdio.h>
#include<string.h>
void rev(char s[]){
	strrev(s);
}
int main()
{
	char s[20];
	printf("Enter a string : ");
	fgets(s,20,stdin);
	rev(s);
	puts(s);
 return 0;
}

