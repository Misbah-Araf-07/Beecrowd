/*

Read 100 integer numbers. Print the highest read value and the input position.
Input

The input file contains 100 distinct positive integer numbers.
Output

Print the highest number read and the input position of this value, according to the given example.
*/




#include <stdio.h>
#include <math.h>

int main()
{
    int N,X, X_p , t;
    N=100;
    int a=0 ,b=0 ;

    for (t=1; t<=N;)
    {

       scanf("%d",&X);
       if (X>a)
       {
            a=X;
            X_p=t;
       }
        t++;
    }
    printf("%d\n%d\n",a,X_p);






    return 0;
}
