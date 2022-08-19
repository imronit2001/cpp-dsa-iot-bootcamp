/*	Write a program to count the number of vowels and consonants in a string using a
pointer.
	*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[20],ch,*p=NULL;
	int i,v=0,c=0;
	p=s;
	printf("Enter a string : ");
	fgets(p,20,stdin);
	for(i=0;*(p+i);i++){
		if(isalpha(*(p+i))){
			ch=toupper(*(p+i));
			if(ch==65||ch==69||ch==73||ch==79||ch==85)
				v++;
			else
				c++;
		}
	}
	printf("\nTotal no of vowels = %d",v);
	printf("\nTotal no of consonant = %d",c);
 return 0;
}
