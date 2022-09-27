/*	Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex)	*/
#include<iostream>
using namespace std;
class Complex{
	private:
		int a,b;
	public:
		void setData(int,int);
		void showData();
		Complex add(Complex);
};
void Complex::setData(int x,int y){
	a = x;
	b = y;
}
void Complex::showData(){
	if(b>=0)
		cout<<endl<<a<<"+i"<<b;
	else
		cout<<endl<<a<<"-i"<<-b;
}
Complex Complex::add(Complex C){
	Complex t;
	t.a = a + C.a;
	t.b = b + C.b;
	return t;
}
int main()
{
	Complex c1,c2,c3;
	c1.setData(2,4);
	c2.setData(4,-2);
	c3 = c1.add(c2);
	c1.showData();
	c2.showData();
	c3.showData();
	
 return 0;
}

