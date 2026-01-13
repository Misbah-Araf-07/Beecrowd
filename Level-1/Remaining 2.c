/*



Read an integer N. Print all numbers between 1 and 10000, which divided by N will give the rest = 2.
Input

The input is an integer N (N < 10000)
Output

Print all numbers between 1 and 10000, which divided by n will give the rest = 2, one per line.
*/

#include <stdio.h>


int main()
{
    int t, N, X;
    N=0, X=10000;
    scanf ("%d",&N);

    for (t=1; t<=X ;)
    {
    if (t%N==2) printf ("%d\n",t);


    t++;
    }

    return 0;
}


