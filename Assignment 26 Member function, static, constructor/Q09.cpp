/*	Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit	*/
#include<iostream>
#include<string.h>
using namespace std;
class Bill{
	char name[20];
	char mobile[10];
	float bill;
	int unit;
	public:
		Bill(){
			strcpy(name,"Customer");
			strcpy(mobile,"XXXXXXXXXX");
			bill = 0;
			unit = 0;
		}
		void get(char* cname,char* cmobile,int n){
			strcpy(name,cname);
			strcpy(mobile,cmobile);
			unit = n;
		}
		void getBill(){
			if(unit<=100)
				bill = unit*1.20;
			else if(unit<=200)
				bill = 100*1.20 + (unit-100)*2;
			else
				bill = 100*1.20 + 100*2 + (unit-200)*3;
			cout<<"\n\nCustomer Name = "<<name;
			cout<<"\n\nCustomer Mobile = "<<mobile;
			cout<<"\n\nTotal Unit = "<<unit;
			cout<<"\n\nTotal Bill = "<<bill<<" Rs";	
		}
};
int main()
{
	Bill a;
	a.get("Ronit Singh","7003622801",296);
	a.getBill();
 return 0;
}

