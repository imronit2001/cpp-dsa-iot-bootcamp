/*	Write a function to find the highest salary employee from a given array of 10
employees. [ Refer structure from question 1]	*/
#include<stdio.h>
#include<string.h>
struct Employee{
	int id;
	char name[20];
	float salary;
};
struct Employee input(){
	struct Employee e;
	printf("\nEnter Employee Id : ");
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
	struct Employee e[3];
	int i,max;
	for(i=0;i<3;i++){
		printf("\n++++++++++++++++++++++++++++++++");
		printf("\n Employee %d",i+1);
		e[i] = input();
		printf("\n++++++++++++++++++++++++++++++++\n");
	}
	max = 0;
	for(i=1;i<3;i++){
		if(e[i].salary>e[max].salary)
			max = i;
	}
	printf("\n\nEmployee Having Maximum Salary\n");
	display(e[max]);
	
	
 return 0;
}

