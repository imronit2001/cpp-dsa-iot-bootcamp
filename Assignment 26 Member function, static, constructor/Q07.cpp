/*	Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.	*/
#include<iostream>
using namespace std;
class Box{
	int l,b,h;
	public:
		Box(){
			l=1;
			b=1;
			h=1;
		}
		Box(int x,int y,int z){
			l=x;
			b=y;
			h=z;
		}
		void setData(int x,int y,int z){
			l=x;
			b=y;
			h=z;
		}
		void getData(){
			cout<<endl<<"Length = "<<l<<"\tBreadth = "<<b<<"\tHeight = "<<h;
		}
		void volume(){
			cout<<endl<<"Volume = "<<l*b*h<<" cubic unit";
		}
};
int main()
{
	Box b1,b2(2,4,1),b3;
	b3.setData(2,5,1);
	b1.getData();
	b1.volume();
	b2.getData();
	b2.volume();
	b3.getData();
	b3.volume();
	
 return 0;
}

