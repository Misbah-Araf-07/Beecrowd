/*
  

Read an integer N. Print the square of each one of the even values from 1 to N including N if it is the case.
Input

The input contains an integer N (5 < N < 2000).
Output

Print the square of each one of the even values from 1 to N, as the given example.

Be carefull! Some language automaticly print 1e+006 instead 1000000. Please configure your program to print the correct format setting the output precision.
*/


#include <stdio.h>
#include <math.h>

int main()
{
    long long int N ;
    N=0;
    scanf("%lld",&N);
    if (N>5)
    {
        long long int t;
        for (t=1; t<=N ; )
        {
            if (t%2==0)
                printf ("%lld^2 = %lld\n",t,(t*t));
          t++;
        }
    }

    return 0;
}


