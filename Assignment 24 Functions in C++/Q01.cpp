/*	Define a function to check whether a given number is a Prime number or not.	*/
#include<iostream>
using namespace std;
int isprime(int n){
	for(int i=2;i<n/2;i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	isprime(n)==1?cout<<n<<" is a Prime number":cout<<n<<" is not a Prime number";	
 return 0;
}

