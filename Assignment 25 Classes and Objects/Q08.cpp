/*	Define a class Rectangle and define an instance member function to find the area of
the rectangle	*/
#include<iostream>
using namespace std;
class Rectangle{
	int l,b;
	public:
		void setData(int x,int y){
			l=x;
			b=y;
		}
		int area(){
			return l*b;
		}
};
int main()
{
	Rectangle a;
	a.setData(3,2);
	cout<<"Area = "<<a.area()<<" sq mt";
 return 0;
}

