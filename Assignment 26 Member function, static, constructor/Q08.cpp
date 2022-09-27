/*	Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor	*/
#include<iostream>
using namespace std;
class Bank{
	float p;
	int y;
	public:
		Bank(){
			p=0;
			y=0;
		}
		Bank(float a){
			p=a;
			y=0;
		}
		Bank(int a){
			p=0;
			y=a;
		}
		Bank(float a,int b){
			p=a;
			y=b;
		}
		Bank(int a,float b){
			p=b;
			y=a;
		}
		Bank(Bank &B){
			p=B.p;
			y=B.y;
		}
		void setData(float a,int b){
			p=a;
			y=b;
		}
		void getData(){
			cout<<"\nPrincipal = "<<p<<"\t Rate = "<<rate<<"\t Year = "<<y;
		}
		void si(){
			cout<<"\nInterest = "<<p*rate*y/100.0;
		}
		static float rate;
};
float Bank::rate = 3.5;
int main()
{
	Bank obj;
	obj.setData(3001,3);
	obj.getData();
	obj.si();
 return 0;
}

