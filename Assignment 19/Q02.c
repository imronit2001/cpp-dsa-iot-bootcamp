/*	Write a program to sort 10 city names stored in two dimensional arrays, taken from
the user.	*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[5][20];
	char temp[20];
	int i,j;
	for(i=0;i<5;i++){
		printf("Enter city %d\t",i+1);
		fflush(stdin);
		gets(str[i]);
	}
	for(i=0;j<4;j++){
		for(j=0;i<4-j;i++){
			if(strcmp(str[i],str[i+1])>0){
				strcpy(temp,str[i]);
				strcpy(str[i],str[i+1]);
				strcpy(str[i+1],temp);
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%s\n",str[i]);
	}
 return 0;
}

