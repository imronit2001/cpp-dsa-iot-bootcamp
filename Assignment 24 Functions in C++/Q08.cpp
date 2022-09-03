/*	Define overloaded functions to calculate area of circle, area of rectangle and area of
triangle	*/
#include<iostream>
using namespace std;
float area(int r){
	return 3.14*r*r;
}
int area(int a,int b){
	return a*b;
}
float area(int a, float b){
	return a*b/2;
}
int main()
{
	float circle = area(5);
	cout<<"Area of Circle : "<<circle<<endl;
	int rect = area(2,5);
	cout<<"Area of Rectangle : "<<rect<<endl;
	float tri = area(2,3.0f);
	cout<<"Area of Triangle : "<<tri<<endl;
 return 0;
}

