/*
Write a program that reads 6 numbers. These numbers will only be positive or negative (disregard null values). Print the total number of positive numbers.
Input

Six numbers, positive and/or negative.
Output

Print a message with the total number of positive numbers.

*/


#include <stdio.h>
int main ()
{
    int t,counter;
    float n;
    t=0,n=0;
    for (; (t>=0 && t<6) ; t++)
    {
        scanf("%f",&n);
            if (n>0)
                counter++;
    }

    printf("%d valores positivos\n",counter);
    return 0 ;
}
