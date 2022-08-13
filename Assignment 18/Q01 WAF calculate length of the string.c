/*	Write a function to calculate length of the string	*/
#include<stdio.h>
int len(char s[]){
	int i;
	for(i=0;s[i];i++);
	return i;
}
int main()
{
	char s[20]="Ronit";
	printf("Length of string \"%s\" is %d",s,len(s));
 return 0;
}
