#include<stdio.h>
int hcf(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return hcf(a - b, b);
        }
        else
        {
            return hcf(a, b - a);
        }
    }
    return a;
}
int main()
{
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	printf("HCF of %d and %d is %d",a,b,hcf(a,b));
 return 0;
}

