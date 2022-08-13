/*	Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)
	*/
#include<stdio.h>
int alnum(char s[]){
	int i,alpha=0,num=0;
	for(i=0;s[i];i++){
		if((s[i]>=65&&s[i]<=90) || (s[i]>=97 && s[i]<=122))
			alpha=1;
		else if(s[i]>=48 && s[i]<=57)
			num=1;
	}
	if(alpha&&num)
		return 1;
	else
		return 0;
}
int main()
{
	char s[20];
	printf("Enter a string : ");
	fgets(s,20,stdin);
	alnum(s)?printf("Yes string is alphanumeric"):printf("NO, string is not alphanumeric");
 return 0;
}

