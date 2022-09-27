/*	Define a class Cube and calculate Volume of Cube and initialise it using constructor.	*/
#include<iostream>
using namespace std;
class Cube{
	int a;
	public:
		Cube(){
			a = 1;
		}
		Cube(int x){
			a = x;
		}
		int volume(){
			cout<<"Volume =  "<<a*a*a<<" cubic unit";
		}
};
int main()
{
	Cube c1(4);
	c1.volume();
 return 0;
}

