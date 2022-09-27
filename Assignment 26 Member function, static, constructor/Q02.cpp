/*
	Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)

*/
#include<iostream>
using namespace std;
class Time{
	int h,m,s;
	public:
		void setTime(int hr,int min, int sec){
			if(sec>59){
				min = min + sec/60;
				sec = sec%60;
			}
			if(min>59){
				hr = hr + min/60;
				min = min%60;
			}
			if(hr>23){
				hr = hr % 24;
			}
			h = hr;
			m = min;
			s = sec;
		}
		void showTime(){
			cout<<h<<" Hr : "<<m<<" Min : "<<s<<" Sec\n";
		}
		Time add(Time T){
			Time obj;
			obj.h = h + T.h;
			obj.m = m + T.m;
			obj.s = s + T.s;
			if(obj.s>59){
				obj.m = obj.m + obj.s/60;
				obj.s = obj.s%60;
			}
			if(obj.m>59){
				obj.h = obj.h + obj.m/60;
				obj.m = obj.m%60;
			}
			if(obj.h>23){
				obj.h = obj.h % 24;
			}
			return obj;
		}
		
};
int main()
{
	Time t1,t2,t3;
	t1.setTime(3,28,30);
	t2.setTime(2,58,56);
	t3=t1.add(t2);
	t1.showTime();
	t2.showTime();
	t3.showTime();
	
 return 0;
}

