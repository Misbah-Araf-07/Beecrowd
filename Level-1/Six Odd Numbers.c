/* Read an integer value X and print the 6 consecutive odd numbers from X, a value per line, including X if it is the case.
Input

The input will be a positive integer value.
Output

The output will be a sequence of six odd numbers.
*/


#include <stdio.h>

int main ()


{   int n ;

    int t=0;
    scanf("%d",&n);

    for ( ;t>=0 && t<=5; )
    {
        t++;

        if(n%2!=0)
        {
            printf("%d\n",n);
            n+=2;
        }


        else
        {
            n++;
            printf("%d\n",n);
            n++;

        }


    }


    return 0;
}
