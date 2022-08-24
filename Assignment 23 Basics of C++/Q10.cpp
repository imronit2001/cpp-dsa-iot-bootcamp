/*	Write a C++ program to add all the numbers of an array of size 10.	*/
#include<iostream>
using namespace std;
int main()
{
	int n = 10;
	int arr[n];
	int sum = 0;
	for(int i=0;i<n;i++){
		cout<<"Enter arr["<<i<<"] : ";
		cin>>arr[i];
		sum += arr[i];
	}
	cout<<"Sum of elements of array is "<<sum;
 return 0;
}

