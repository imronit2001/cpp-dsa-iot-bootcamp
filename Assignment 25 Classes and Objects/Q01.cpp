/*	Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number	*/
#include<iostream>
using namespace std;
class Complex{
	int a,b;
	public:
		void setData(int x,int y){
			a=x;
			b=y;
		}
		void getData(){
			if(b>0)
				cout<<a<<"+"<<b<<"i"<<endl;
			else
				cout<<a<<b<<"i"<<endl;
		}
};
int main()
{
	Complex obj;
	obj.setData(2,-3);
	obj.getData();
 return 0;
}

