/*	Write functions using function overloading to add two numbers having different data
types.	*/
#include<iostream>
using namespace std;
int add(int a, int b){
	return a+b;
}
float add(int a,float b){
	return (float)a+b;
}
float add(float a,float b){
	return a+b;
}
int main()
{
	cout<<add(2,4)<<endl;
	cout<<add(2,3.0f)<<endl;
	cout<<add(3.0f,2.0f)<<endl;
	
 return 0;
}

