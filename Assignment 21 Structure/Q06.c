/*	Write a function to sort employees according to their names [refer structure from
question 1]	*/
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
	printf("\n%4d %20s %4.1f",e.id,e.name,e.salary);
}
void sortByName(struct Employee *e, int n){
	int i,j;
	struct Employee t;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(e[j].name < e[j+1].name){
				t = *(e+j);
				*(e+j) = *(e+j+1);
				*(e+j+1) = t;
			}
		}
	}
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
	
	sortByName(e,3);
	
	for(i=0;i<3;i++){
		display(e[i]);
	}
	
	
 return 0;
}

