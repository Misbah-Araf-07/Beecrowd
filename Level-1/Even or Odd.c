/*



Read an integer value N. After, read these N values and print a message for each value saying if this value is odd, even, positive or negative. In case of zero (0), although the correct description would be "EVEN NULL", because by definition zero is even, your program must print only "NULL", without quotes.
Input

The first line of input is an integer N (N < 10000), that indicates the total number of test cases. Each case is a integer number X (-107 < X <107)..
Output

For each test case, print a corresponding message, according to the below example. All messages must be printed in uppercase letters and always will have one space between two words in the same line.*/

#include <stdio.h>


int main()
{
    int t, N, X;
    N=0 , X=0;
    scanf ("%d",&N);

    for (t=1; t<=N ;)
    {

        scanf("%d",&X);
        if (X==0) printf ("NULL\n");
        else
        {
            if (X%2==0) printf("EVEN ");
            else if (X%2!=0) printf("ODD ");
            if (X>0) printf("POSITIVE\n");
            else if (X<0) printf("NEGATIVE\n");

        }
    t++;
    }

    return 0;
}


