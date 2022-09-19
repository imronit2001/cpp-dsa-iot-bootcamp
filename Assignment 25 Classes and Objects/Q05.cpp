/*	Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.	*/
#include<iostream>
using namespace std;
class ReverseNumber{
	int num,rev;
	public:
		void setData(int n){
			num=n;
			rev=0;
		}
		int reverse(){
			int n = num ;
			while(n>0){
				int r = n%10;
				n/=10;
				rev = rev * 10 + r;
			}
			return rev;
		}
};
int main()
{
	ReverseNumber obj;
	obj.setData(1643);
	cout<<obj.reverse();
 return 0;
}

