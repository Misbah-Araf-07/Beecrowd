/*
Write a program that prints all even numbers between 1 and 100, including them if it is the case.
Input    In this extremely simple problem there is no input.
Output   Print all even numbers between 1 and 100, including them, one by row.
*/


#include <stdio.h>
int main ()
{
    int n;
    n=2;
    for (; n>1 && n<=100;)
    {
        printf("%d\n",n);
        n+=2;

    }
    return 0 ;
}
