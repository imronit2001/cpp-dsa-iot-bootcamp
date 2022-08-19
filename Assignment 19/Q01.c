/*	Write a program to find the number of vowels in each of the 5 strings stored in two
dimensional arrays, taken from the user	*/
#include<stdio.h>
int main()
{
	char str[5][20];
	int i,j,v=0;
	char ch;
	for(i=0;i<5;i++){
		printf("Enter string %d\t",i+1);
		fgets(str[i],20,stdin);
	}
	for(i=0;i<5;i++){
		for(j=0;str[i][j];j++){
			ch=toupper(str[i][j]);
			if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
				v++;
		}
		printf("\nTotal vowels in string %d is %d",i+1,v);
		v=0;
	}
	
 return 0;
}

