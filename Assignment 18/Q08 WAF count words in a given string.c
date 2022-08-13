/*	Write a function to count words in a given string	*/
#include<stdio.h>
int count(char s[]){
	int i,sp=0;
	for(i=0;s[i];i++){
		if(isspace(s[i]))
			sp++;
	}
	return sp;
}
int main()
{
	char s[20],t[20];
	printf("Enter a string : ");
	fgets(s,20,stdin);
	printf("Total words = %d",count(s));
 return 0;
}

