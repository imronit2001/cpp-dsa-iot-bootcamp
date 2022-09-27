/*	Define a class Date and write a program to Display Dateand initialise date object
using Constructors	*/
#include<iostream>
#include<iomanip>
using namespace std;
class Date{
	int d,m,y;
	public:
		Date(){
			d=1;
			m=1;
			y=2022;
		}
		Date(int a,int b,int c){
			d=a;
			m=b;
			y=c;
		}
		void setData(int a,int b,int c){
			d=a;
			m=b;
			y=c;
		}
		void getData(){
			cout<<d<<" / "<<m<<" / "<<y<<endl;
		}
};
int main()
{
	Date d1,d2(4,5,2012),d3;
	d3.setData(3,8,2001);
	d1.getData();
	d2.getData();
	d3.getData();
 return 0;
}

