/*	Define a class Counter and Write a program to Show Counter using Constructor	*/
#include<iostream>
using namespace std;
class Counter{
	public:
		static int k;
		Counter(){
			k++;
		}
};
int Counter::k;
int main()
{
	Counter a,b,c;
	cout<<"Count = "<<Counter::k;
 return 0;
}

