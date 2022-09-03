/*	Define a function to check whether a given number is a term in a Fibonacci series or not.	*/
#include<iostream>
using namespace std;
int check(int n){
	int a=0,b=1,c=a+b;
	while(a<=n){
		if(a==n)
			return 1;
		a=b;
		b=c;
		c=a+b;
	}
	return 0;
}
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	check(n)?cout<<"YES":cout<<"NO";
 return 0;
}

