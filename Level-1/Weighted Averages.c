/*

Read an integer N, which represents the number of following test cases. Each test case consists of three floating-point numbers, each one with one digit after the decimal point. Print the weighted average for each of these sets of three numbers, considering that the first number has weight 2, the second number has weight 3 and the third number has weight 5.
Input

The input file contains an integer number N in the first line. Each N following line is a test case with three float-point numbers, each one with one digit after the decimal point.
Output

For each test case, print the weighted average according with below example.
*/




#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d",&N);

    double X1 , X2, X3;

    for (int t=0; t<N ;t++)
    {
        scanf("%lf %lf %lf", &X1, &X2, &X3);

        double weighted1 = X1 * 2.00;
        double weighted2 = X2 * 3.00;
        double weighted3 = X3 * 5.00;

        double total = weighted1 + weighted2 + weighted3;
        double avg = round(total / 10.00 * 10.0) / 10.0; 

        printf("%.1f\n", avg); 
    }

    return 0;
}
