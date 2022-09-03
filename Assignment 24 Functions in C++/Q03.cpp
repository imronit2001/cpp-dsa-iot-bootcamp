/*	Define a function to calculate x raised to the power y.	*/
#include<iostream>
using namespace std;
int power(int b,int p){
	int result = 1;
	for(int i=0;i<p;i++)
		result = result * b ;
	return result;
}
int main()
{
	int b,p;
	cout<<"Enter base and power ";
	cin>>b>>p;
	cout<<b<<"^"<<p<<" = "<<power(b,p);
 return 0;
}

