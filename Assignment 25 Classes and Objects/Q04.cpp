/*	Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.	*/
#include<iostream>
using namespace std;
class LargestNumber{
	int a,b,c;
	public:
		void setData(int x,int y,int z){
			a=x;
			b=y;
			c=z;
		}
		int findLargest(){
			if(a>b){
				if(a>c)
					return a;
				else
					return c;
			}else{
				if(b>c)
					return b;
				else
					return c;
			}
		}
		
};
int main()
{
	LargestNumber obj;
	obj.setData(4,8,2);
	cout<<"Largest Number is "<<obj.findLargest();
 return 0;
}

