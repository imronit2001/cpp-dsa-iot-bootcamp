/*	Define a class Circle and define an instance member function to find the area of
the circle	*/
#include<iostream>
using namespace std;
class Circle{
	int r;
	public:
		void setData(int x){
			r=x;
		}
		float area(){
			return 3.14*r*r;
		}
};
int main()
{
	Circle a;
	a.setData(3);
	cout<<"Area = "<<a.area()<<" sq mt";
 return 0;
}

