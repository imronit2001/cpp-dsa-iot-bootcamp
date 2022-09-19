/*	Define a class Greatest and define instance member function to find Largest among
3 numbers using classes	*/
#include<iostream>
using namespace std;
class Greatest{
	int a,b,c;
	public:
		void setData(int p,int q,int r){
			a=p;
			b=q;
			c=r;
		}
		int max(){
			if(a>b){
				if(a>c)
					return a;
				else
					return c;
			}else{
				if(b>c)
					return b;
				else
					return c;
			}
		}
};
int main()
{
	Greatest a;
	a.setData(2,9,3);
	cout<<"Maximum = "<<a.max();
 return 0;
}

