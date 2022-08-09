/*	Write a function to calculate LCM of two numbers. (TSRS)
	*/

#include <stdio.h>
  
int get_lcm( int a, int b); // function declaration   
  
int main()  
{  
    int n1, n2, lcm; // declaration of variables  
    printf (" \n Enter any two positive numbers to get the LCM of: \n ");  
    scanf ("%d %d", &n1, &n2);  
    lcm = get_lcm( n1, n2); // function calling  
    printf ( " \n LCM of %d and %d is %d. ", n1, n2, lcm);  
    return 0;  
}  
  
int get_lcm ( int n1, int n2) // function definition   
{  
    /* static variabe is iniatialized only once for each function call */     
    static int max = 1;  
    if ( max % n1  == 0 && max % n2 == 0)  
    {  
        return max;  
    }  
    else  
    {  
        max++;  
        get_lcm( n1, n2);  
        return max;  
    }  
}  
