/*	Write a program to calculate the difference between two time periods	*/
#include<stdio.h>
#include<string.h>
struct Time{
	int h,m;
};
struct Time input(){
	struct Time t;
	printf("Enter Time [HH:MM] : ");
	scanf("%d:%d",&t.h,&t.m);
	if(t.m>59){
		t.h = t.m/60;
		t.m = t.m % 60;
	}
	if(t.h > 23){
		t.h = t.h%24;
	}
	return t;
}
struct Time output(struct Time t){
	printf("\n%02d:%02d",t.h,t.m);
}
struct Time calc(struct Time a,struct Time b){
	struct Time c;
	c.h = a.h - b.h ;
	c.m = a.m - b.m ;
	if(c.m>59){
		c.h = c.m/60;
		c.m = c.m % 60;
	}
	if(c.h > 23){
		c.h = c.h%24;
	}
}
int main()
{
	struct Time a,b,c;
	a = input();
	b = input();
	c = calc(a,b);
	output(a);
	output(b);
	output(c);
	
 return 0;
}

