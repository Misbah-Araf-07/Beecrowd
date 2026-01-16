/*

I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=7
I=3 J=6
I=3 J=5
...
I=9 J=7
I=9 J=6
I=9 J=5 

Make a program that prints the sequence like the following exemple.
*/

#include <stdio.h>

int main() {

    int t, I,J, counter=0;
    I=1 , J=7;

    for (t=I; I<=9 ;)
    {
    counter++;
    t++;
    printf("I=%d J=%d\n",I,J);
    J--;

    if (counter>2)
        {
        counter=0;
        I+=2;
        J=7;
        }




    }

    return 0;
}
