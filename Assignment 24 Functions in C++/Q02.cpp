/*	Define a function to find the highest value digit in a given number.	*/
#include<iostream>
using namespace std;
int highestDigit(int n){
	int max = n%10;
	n/=10;
	while(n>0){
		int r = n % 10;
		n/=10;
		if(r>max)
			max = r;
	}
	return max;
}
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	cout<<"Highest digit in "<<n<<" is "<<highestDigit(n);
 return 0;
}

