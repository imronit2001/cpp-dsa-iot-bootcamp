/*	Define a class student and write a program to enter student details using constructor
and define member function to display all the details	*/
#include<iostream>
#include<string.h>
using namespace std;
class Student{
	int roll;
	char name[20];
	int marks;
	public:
		static int k;
		Student(){
			roll = k++;
			strcpy(name,"Student");
			marks = 0;
		}
		Student(char* s,int n){
			roll = k++;
			strcpy(name,s);
			marks = n;
		}
		void setdata(char* s,int n){
			strcpy(name,s);
			marks = n;
		}
		void getData(){
			cout<<endl<<"\t"<<roll<<"\t"<<name<<"\t"<<marks;
		}
		
};
int Student::k = 1;
int main()
{
	Student s1("Ronit",370),s2,s3;
	s3.setdata("Sumit",306);
	s1.getData();
	s2.getData();
	s3.getData();
 return 0;
}

