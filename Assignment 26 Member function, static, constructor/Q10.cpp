/*	Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result.	*/
#include<iostream>
using namespace std;
class StaticCount{
	public:
		static int k;
		void inc(){
			k++;
		}
		void show(){
			cout<<endl<<"k = "<<k;
		}
};
int StaticCount::k;
int main()
{
	StaticCount a;
	a.inc();
	a.inc();
	a.inc();
	a.show();
 return 0;
}

