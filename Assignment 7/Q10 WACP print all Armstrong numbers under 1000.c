#include <stdio.h>
int main()
{
    int num, originalNum, remainder, result = 0, i;
    for (i = 100; i <= 1000; i++)
    {
        originalNum = i;

        while (originalNum != 0)
        {
            // remainder contains the last digit
            remainder = originalNum % 10;

            result += remainder * remainder * remainder;

            // removing last digit from the orignal number
            originalNum /= 10;
        }

        if (result == num)
            printf("%d\t", num);
    }
    return 0;
}
