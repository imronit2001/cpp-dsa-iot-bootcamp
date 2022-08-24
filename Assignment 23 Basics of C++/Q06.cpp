/*	Write a C++ program to calculate an average of 3 numbers.	*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,s;
	cout<<"Enter three numbers : ";
	cin>>a>>b>>c;
	s=a+b+c;
	float avg = (float)s/3.0;
	cout<<"Average of "<<a<<","<<b<<","<<" and "<<c<<" is "<<avg;
 return 0;
}

