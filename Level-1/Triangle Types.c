/*


Read 3 double numbers (A, B and C) representing the sides of a triangle and arrange them in decreasing order, so that the side A is the biggest of the three sides. Next, determine the type of triangle that they can make, based on the following cases always writing an appropriate message:

    if A ≥ B + C, write the message: NAO FORMA TRIANGULO
    if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
    if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
    if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
    if the three sides are the same size, write the message: TRIANGULO EQUILATERO
    if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES

Input

The input contains three double numbers, A (0 < A) , B (0 < B) and C (0 < C).
Output

Print all the classifications of the triangle presented in the input.



*/

#include <stdio.h>
int main ()
{
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);

    double og_A=A, og_B=B, og_C=C;
    double temp;

    if(C>B)
    {
        temp=B ;
        B=C;
        C=temp;

    }

    if(C>A)
    {
        temp=A ;
        A=C;
        C=temp;

    }

    if(B>A)
    {
        temp=A ;
        A=B;
        B=temp;

    }

    if (A>= B+C) printf("NAO FORMA TRIANGULO\n");
    else 
    {
        
    if(A*A == B*B + C*C) printf("TRIANGULO RETANGULO\n");
    if(A*A > B*B + C*C) printf("TRIANGULO OBTUSANGULO\n");
    if(A*A < B*B + C*C) printf("TRIANGULO ACUTANGULO\n");
    if(A==B && B==C) printf("TRIANGULO EQUILATERO\n");
    if((A==B && A!=C) || (C==B && C!=A) || (A==C && C!=B) ) printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
