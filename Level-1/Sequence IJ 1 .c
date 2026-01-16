/*


I=1 J=60
I=4 J=55
I=7 J=50
...
I=? J=0 


Make a program that prints the sequence like the following example.
*/

#include <stdio.h>

int main() {

    int t, I,J;
    I=1 , J=60;

    for (t=I;  J>=0 ;t++)
    {
        printf("I=%d J=%d\n",I,J);
        I+=3;
        J-=5;


    }

    return 0;
}
