/*	Define a function to swap data of two int variables using call by reference	*/
#include<iostream>
using namespace std;
void swap(int *p,int *q){
	int t = *p;
	*p = *q;
	*q = t;
}
int main()
{
	int a,b;
	cout<<"Enter a and b : ";
	cin>>a>>b;
	swap(&a,&b);
	cout<<"A = "<<a<<" B = "<<b;
 return 0;
}

