/*
 	
I=0 J=1
I=0 J=2
I=0 J=3
I=0.2 J=1.2
I=0.2 J=2.2
I=0.2 J=3.2
.....
I=2 J=?
I=2 J=?
I=2 J=? 


Make a program that prints the sequence like the following example.


*/

#include <stdio.h>

int main()
{   
    int t, k;
    double I, J;

    for (t=0; t<=10; t++)
    {
        I = t * 0.2;
        J = 1 + I;
        
        for (k=0; k<3; k++)
        {
            if ( I==0 || I==1 || I==2 )
                printf("I=%0.lf ", I);
            else
                printf("I=%.1lf ", I);

            if ( J==1 || J==2 || J==3 || J==4 || J==5 )
                printf("J=%0.lf\n", J);
            else
                printf("J=%.1lf\n", J);

            J++;
        }
    }
    return 0;
}
