/*	Define a class Factorial and define an instance member function to find the Factorial
of a number using class.	*/
#include<iostream>
using namespace std;
class Factorial{
	public:
		void fact(int);
};
void Factorial::fact(int n){
	int f=1;
	for(int i=1;i<=n;i++){
		f*=i;
	}
	cout<<"Factorial = "<<f;
}
int main()
{
	Factorial obj;
	obj.fact(5);
 return 0;
}

