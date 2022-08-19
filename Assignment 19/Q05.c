/*	Suppose we have a list of email addresses, check whether all email addresses have
‘@’ in it. Print the odd email out.	*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s[3][20],t[20];
	int i;
	for(i=0;i<3;i++)
		fgets(s[i],20,stdin);
	for(i=0;i<3;i++){
		if(strchr(s[i],'@')!=0)
		{
			printf("\n%s",s[i]);
		}
	}
 return 0;
}

