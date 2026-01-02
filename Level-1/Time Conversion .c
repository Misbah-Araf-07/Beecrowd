/*



Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.
Input

The input file contains an integer N.
Output

Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.
*/

#include <stdio.h>

int main ()

{   int N ;
    scanf("%d",&N);

    {

    if(N>3600)
        {
        printf("%d:",(N/3600));
        N=N%3600;
        }

    else printf("0:");
    }


    {

    if(N>60)
        {
        printf("%d:",(N/60));
        N=N%60;
        }
    else printf("0:");
    }

    {

    if(N>60)
        printf("%d\n",N/60);
    else
        printf("%d\n",N);


    }
    return 0;
}

