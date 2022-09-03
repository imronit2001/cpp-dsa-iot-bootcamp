/*	Define a function to print Pascal Triangle up to N lines.	*/
#include<iostream>
using namespace std;
int fact(int n){
	int f=1,i=1;
	while(i<=n){
		f*=i;
		i++;
	}
	return f;
}
int comb(int n,int r){
	return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
	int n;
	cout<<"Enter no of lines ";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			cout<<"\t";
		}
		for(int j=0;j<=i;j++){
			cout<<"\t\t"<<comb(i,j);
		}
		cout<<endl;
	}
 return 0;
}

