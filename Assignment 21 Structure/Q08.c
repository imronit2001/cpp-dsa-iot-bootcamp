/*	Write a program to store information of 10 students and display them using structure	*/
#include<stdio.h>
#include<string.h>
typedef struct student{
	int roll;
	char name[20];
}Student;
void display(Student e){
	printf("\n%4d %20s",e.roll,e.name);
}
int main()
{
	Student s[3];
	int i;
	for(i=0;i<3;i++){
		printf("\n++++++++++++++++++++++++++++++++");
		printf("\n Student %d",i+1);
		printf("\n Roll Number : ");
		scanf("%d",&s[i].roll);
		fflush(stdin);
		printf(" Name : ");
		fgets(s[i].name,20,stdin);
		s[i].name[strlen(s[i].name)-1] = '\0';
		printf("\n++++++++++++++++++++++++++++++++\n");
	}
	for(i=0;i<3;i++){
		display(s[i]);
	}
 return 0;
}

