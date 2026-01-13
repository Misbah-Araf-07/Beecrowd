/*

Read an integer N. This N will be the number of integer numbers X that will be read.

Print how many these numbers X are in the interval [10,20] and how many values are out of this interval.
 
Input

The first line of input is an integer N (N < 10000), that indicates the total number of test cases.
Each case is an integer number X (-107 < X < 107).

 
Output

For each test case, print how many numbers are in and how many values are out of the interval.

*/



#include <stdio.h>

int main()
{

    int N,X;
    scanf("%d",&N);

    int t, counter;
    counter = 0;

    for (t=0; t<N ; t++ )
    {
        scanf("%d",&X);
        if (X>=10 && X<=20) counter++;



    }

    int anti = N - counter;

    printf ("%d in\n%d out\n", counter, anti);
    return 0;
}


