/*	Write a function to take input employee data from the user. [ Refer structure from
question 1 ]	*/
#include<stdio.h>
#include<string.h>
struct Employee{
	int id;
	char name[20];
	float salary;
};
void input(struct Employee e){
	printf("Enter Employee Id : ");
	scanf("%d",&e.id);
	fflush(stdin);
	printf("Enter Employee Name : ");
	fgets(e.name,20,stdin);
	e.name[strlen(e.name)-1] = '\0';
	printf("Enter Employee Salary : ");
	scanf("%f",&e.salary);
}
int main()
{
	struct Employee e;
	input(e);
 return 0;
}

