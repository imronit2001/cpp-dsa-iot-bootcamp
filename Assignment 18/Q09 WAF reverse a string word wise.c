/*	Write a function to reverse a string word wise. (For example if the given string is
“Mysirg Education Services” then the resulting string should be “Services Education
Mysirg” )	*/
#include<stdio.h>
#include<string.h>
void rev(char string[]){
	char temp[20];
	int i,length;
	length=strlen(string)-1;
   for(i=0;i<strlen(string)/2;i++){
//      temp=string[i];
		strcpy(string[i],temp);
//      string[i]=string[length];
		strcpy(string[length],string[i]);
//      string[length--]=temp;
		strcpy(temp,string[length--]);
   }
}
int main()
{
	char string[3][20],temp;
   int i,length;
   printf("Enter String : ");
   for(i=0;i<3;i++){
   	fgets(string[i],20,stdin);
   }
   rev(string);
   for(i=0;i<3;i++)
   	puts(string[i]);
	
 return 0;
}

