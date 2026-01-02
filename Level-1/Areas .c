/*
Make a program that reads three floating point values: A, B and C. Then, calculate and show:
a) the area of the rectangled triangle that has base A and height C.
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ​​the square that has side B.
e) the area of the rectangle that has sides A and B.
Input

The input file contains three double values with one digit after the decimal point.
Output

The output file must contain 5 lines of data. Each line corresponds to one of the areas described above, always with a corresponding message (in Portuguese) and one space between the two points and the value. The value calculated must be presented with 3 digits after the decimal point.
*/


#include <stdio.h>
#define Pi 3.14159
#include <math.h>
int main ()
{   double A,B,C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double Area_Tri=(0.5)*A *C;
    double Area_C= Pi*C*C;
    double Area_Tra= (0.5)*(A+B)*C;
    double Area_Sq=pow(B,2);
    double Area_Rc=A*B;


    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",
      Area_Tri,Area_C,Area_Tra, Area_Sq, Area_Rc);


    return 0 ;
}


