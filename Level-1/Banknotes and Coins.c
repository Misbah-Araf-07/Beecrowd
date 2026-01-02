/*
Read a value of floating point with two decimal places. This represents a monetary value. After this, calculate the smallest possible number of notes and coins on which the value can be decomposed. The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.
Input

The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).
Output

Print the minimum quantity of banknotes and coins necessary to change the initial value, as the given example.
/*

#include <stdio.h>
#include <math.h>

int main ()
{
    double N;
    scanf("%lf",&N);

    printf("NOTAS:\n");
    {
        if(N>100)
        {
            printf("%d nota(s) de R$ 100.00\n",(int)(N/100));
            N=fmod(N, 100);                                             //fmod (arg1, arg2) gives the arg1%arg2 for not just int , but also  for double/float. Use %f to get value  
        }
       
        else printf("0 nota(s) de R$ 100.00\n");
    }
    {
        if(N>50)
        {
            printf("%d nota(s) de R$ 50.00\n",(int)(N/50));
            N=fmod(N, 50);
        }
        else printf("0 nota(s) de R$ 50.00\n");
    }
    {
        if(N>20)
        {
            printf("%d nota(s) de R$ 20.00\n",(int)(N/20));
            N=fmod(N, 20);
        }
        else printf("0 nota(s) de R$ 20.00\n");
    }
    {
        if(N>10)
        {
            printf("%d nota(s) de R$ 10.00\n",(int)(N/10));
            N=fmod(N, 10);
        }
        else printf("0 nota(s) de R$ 10.00\n");
    }
    {
        if(N>5)
        {
            printf("%d nota(s) de R$ 5.00\n",(int)(N/5));
            N=fmod(N, 5);
        }
        else printf("0 nota(s) de R$ 5.00\n");
    }
    {
        if(N>2)
        {
            printf("%d nota(s) de R$ 2.00\n",(int)(N/2));
            N=fmod(N, 2);
        }
        else printf("0 nota(s) de R$ 2.00\n");
    }

    printf("MOEDAS:\n");

    {

        if (N>=1)
        {
            printf("%d moeda(s) de R$ 1.00\n",(int)(N/1));
            N=fmod(N, 1);
        }

        else printf("0 moeda(s) de R$ 1.00\n");

    }
    {

        if (N>=0.50)
        {
            printf("%d moeda(s) de R$ 0.50\n",(int)(N/0.50));
            N=fmod(N, 0.50);
        }

        else printf("0 moeda(s) de R$ 0.50\n");

    }
    {

        if (N>=0.25)
        {
            printf("%d moeda(s) de R$ 0.25\n",(int)(N/0.25));
            N=fmod(N, 0.25);
        }

        else printf("0 moeda(s) de R$ 0.25\n");

    }
    {

        if (N>=0.10)
        {
            printf("%d moeda(s) de R$ 0.10\n",(int)(N/0.10));
            N=fmod(N, 0.10);
        }

        else printf("0 moeda(s) de R$ 0.10\n");

    }
    {

        if (N>=0.05)
        {
            printf("%d moeda(s) de R$ 0.05\n",(int)(N/0.05));
            N=fmod(N, 0.05);
        }

        else printf("0 moeda(s) de R$ 0.05\n");

    }
    {

        if (N >= 0.009)
        {
            printf("%d moeda(s) de R$ 0.01\n", (int)((N + 0.001)/0.01));
            N = fmod(N, 0.01);
        }
        else printf("0 moeda(s) de R$ 0.01\n");


    }







    return 0;
}
