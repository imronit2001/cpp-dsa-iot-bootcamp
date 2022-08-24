/*	Write a C++ program to calculate the area of a circle	*/
#include<iostream>
using namespace std;
int main()
{
	int r;
	cout<<"Enter radius of circle : ";
	cin>>r;
	float area = 3.14 * r * r ;
	cout<<"Area of Circle having radius "<<r<<"m is "<<area<<"sq mt";
 return 0;
}

