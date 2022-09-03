/*	Write a function using the default argument that is able to add 2 or 3 numbers.	*/
#include<iostream>
using namespace std;
int add(int,int,int=0);
int add(int a,int b,int c){
	return a+b+c;
}
int main()
{
	int a,b,c;
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter b : ";
	cin>>b;
	cout<<"Enter c : ";
	cin>>c;
	cout<<"Sum of "<<a<<"+"<<b<<" is "<<add(a,b)<<endl;
	cout<<"Sum of "<<a<<"+"<<b<<"+"<<c<<" is "<<add(a,b,c)<<endl;
	
 return 0;
}

