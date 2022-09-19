/*	Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.	*/
#include<iostream>
using namespace std;
class Time{
	int h,m,s;
	public:
		void setData(int x=0,int y=0,int z=0){
			h=x;
			m=y;
			s=z;
		}
		void getData(){
			cout<<h<<" hrs "<<m<<" min "<<s<<" sec \n";
		}
};
int main()
{
	Time obj;
	obj.setData(3,2,5);
	obj.getData();
 return 0;
}

