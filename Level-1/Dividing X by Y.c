/*



Write a program that read two numbers X and Y and print the result of dividing the X by Y. If it's not possible, print the message "divisao impossivel".
Input

The input contains an integer number N. This N is the quantity of pairs of integer numbers X and Y read (dividend and divisor).
Output

For each test case print the result of this division with one digit after the decimal point, or “divisao impossivel” if it isn't possible to perform the calculation.

Obs.: Be carefull. The division between two integers in some languages generates another integer. Use cast:)
*/



#include <stdio.h>

int main()
{

    int X,Y,N;
    X=0, Y=0,  N=0;
    scanf("%d",&N);


    for (int t=0 ; t<N ; )
    {
        scanf("%d %d",&X,&Y);
        double sum = 0;
        sum = (double)X/(double)Y;

        if (X==0 && Y!=0) printf("0.0\n");
        if ((X!=0 && Y==0) || (X==0 && Y==0)) printf("divisao impossivel\n");

        if (X!=0 && Y!=0) printf("%.1lf\n",sum);


        t++;
    }

    return 0;
}
