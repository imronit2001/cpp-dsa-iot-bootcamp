/*	Write a C++ program to calculate the volume of a cuboid.	*/
#include<iostream>
using namespace std;
int main()
{
	int l,b,h;
	cout<<"Enter length, breadth and height of cuboid : ";
	cin>>l>>b>>h;
	int v = l*b*h;
	cout<<"Volume of cuboid is "<<v;
 return 0;
}

