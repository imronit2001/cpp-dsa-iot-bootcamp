/*	Write a function to display employee data. [ Refer structure from question 1 ]	*/
#include<stdio.h>
#include<string.h>
struct Employee{
	int id;
	char name[20];
	float salary;
};
struct Employee input(){
	struct Employee e;
	printf("Enter Employee Id : ");
	scanf("%d",&e.id);
	fflush(stdin);
	printf("Enter Employee Name : ");
	fgets(e.name,20,stdin);
	e.name[strlen(e.name)-1] = '\0';
	printf("Enter Employee Salary : ");
	scanf("%f",&e.salary);
	return e;
}
void display(struct Employee e){
	printf("%4d %20s %4.1f",e.id,e.name,e.salary);
}
int main()
{
	struct Employee e;
	e = input();
	display(e);
 return 0;
}
	
