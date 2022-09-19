/*	Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.	*/
#include<iostream>
using namespace std;
class Square{
	public:
		static int k;
		int sq(int n){
			k++;
			return n*n;
		}
};
int Square::k;
int main()
{
	Square s;
	cout<<"Square of 5 = "<<s.sq(5);
	cout<<"\nNo of times sq fn is called = "<<Square::k;
 return 0;
}

