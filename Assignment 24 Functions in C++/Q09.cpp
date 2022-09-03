/*	Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real.	*/
#include<iostream>
using namespace std;
int max(int a,int b){
	int m = (a>b)?a:b;
	return m;
}
float max(float a,float b){
	float m = (a>b)?a:b;
	return m;
}
int main()
{
	cout<<"Maximum between 2 and 3 is "<<max(2,3)<<endl;
	cout<<"Maximum between 2.5 and 3.5 is "<<max(2.5f,3.5f)<<endl;
 return 0;
}

