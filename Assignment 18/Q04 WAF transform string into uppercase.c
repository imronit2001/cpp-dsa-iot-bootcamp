/*	Write a function to transform string into uppercase	*/
#include<stdio.h>
void upr(char s[]){
	int i;
	for(i=0;s[i];i++){
		if(s[i]>=97 && s[i]<=122)	
			s[i] = s[i] - 32;
	}
}
int main()
{
	char s[20];
	printf("Enter a string : ");
	fgets(s,20,stdin);
	upr(s);
	puts(s);
 return 0;
}

