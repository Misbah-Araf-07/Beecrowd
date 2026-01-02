/*


Read 3 floating-point numbers. After, print the roots of bhaskara’s formula. If it's impossible to calculate the roots because a division by zero or a square root of a negative number, presents the message “Impossivel calcular”.
Input

Read 3 floating-point numbers (double) A, B and C.
Output

Print the result with 5 digits after the decimal point or the message if it is impossible to calculate.

*/


#include <stdio.h>
#include <math.h>

int main ()
{
    double A,B,C;
    scanf("%lf %lf %lf", &A, &B,&C);
    double Ch=(B*B) - (4*A*C);
    double Check= sqrt(Ch);
    double R1= (-1*B + Check)/(2*A);
    double R2= (-1*B - Check)/(2*A);


    if (Ch<0 || A==0) printf("Impossivel calcular\n");

    else printf("R1 = %.5lf\nR2 = %.5lf\n",R1,R2);



    return 0 ;
}
