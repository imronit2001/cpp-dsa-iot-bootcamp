/*	Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc	*/
#include<iostream>
using namespace std;
class Area{
	public:
		void square(int x){
			cout<<"\n Area of Square = "<<x*x<<" sq mt.";
		}
		void rectangle(int x,int y){
			cout<<"\n Area of Rectangle = "<<x*y<<" sq mt.";
		}
		void circle(int x){
			cout<<"\n Area of Circle = "<<3.14*x*x<<" sq mt.";
		}
		
};
int main()
{
	Area a;
	a.square(5);
	a.rectangle(3,9);
	a.circle(5);
 return 0;
}

