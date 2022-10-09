/*	Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student	*/
#include<stdio.h>
#include<string.h>
typedef struct student{
	int roll,chem,math,phy;
	char name[20];
	float p;
}Student;
Student input(){
	Student s;
	printf("\nEnter Roll Number : ");
	scanf("%d",&s.roll);
	fflush(stdin);
	printf("Enter Name : ");
	fgets(s.name,20,stdin);
	s.name[strlen(s.name)-1] = '\0';
	printf("Marks in Chemistry : ");
	scanf("%d",&s.chem);
	printf("Marks in Mathematics : ");
	scanf("%d",&s.math);
	printf("Marks in Physics : ");
	scanf("%d",&s.phy);
	s.p = (s.chem+s.math,s.phy)/3.0;
}
void display(Student s){
	printf("\n%04d\t%20s\t%02d\t%02d\t%02d\t%0.2f",s.roll,s.name,s.chem,s.math,s.phy,s.p);
}
int main()
{
	Student s[5];
	int i;
	char names[20] = "Name";
	for(i=0;i<5;i++){
		printf("\n++++++++++++++++++++++++++++++++");
		printf("\n Student %d",i+1);
		s[i] = input();
		printf("\n++++++++++++++++++++++++++++++++\n");
	}

	for(i=0;i<5;i++){
		display(s[i]);
	}
 return 0;
}

