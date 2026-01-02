/*


In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. The possible banknotes are 100, 50, 20, 10, 5, 2 and 1. Print the read value and the list of banknotes.
Input

The input file contains an integer value N (0 < N < 1000000).
Output

Print the read number and the minimum quantity of each necessary banknotes in Portuguese language, as the given example. Do not forget to print the end of line after each line, otherwise you will receive “Presentation Error”.

*/

#include <stdio.h>

int main ()

{
    long int N;
    scanf("%ld", &N);
    printf("%d\n",N);



    {
        if (N>=100)
        {
            printf("%d nota(s) de R$ 100,00\n",N/100);
            N=N%100;
        }
        else printf("%d nota(s) de R$ 100,00\n",0);
    }


    {
        if (N>=50)
        {
            printf("%d nota(s) de R$ 50,00\n",N/50);
            N=N%50;
        }
        else printf("%d nota(s) de R$ 50,00\n",0);
    }


    {
        if (N>=20)
        {
            printf("%d nota(s) de R$ 20,00\n",N/20);
            N=N%20;
        }
        else printf("%d nota(s) de R$ 20,00\n",0);
    }

    {
        if (N>=10)
        {
            printf("%d nota(s) de R$ 10,00\n",N/10);
            N=N%10;
        }
        else printf("%d nota(s) de R$ 10,00\n",0);
    }

    {
        if (N>=5)
        {
            printf("%d nota(s) de R$ 5,00\n",N/5);
            N=N%5;
        }
        else printf("%d nota(s) de R$ 5,00\n",0);
    }

    {
        if (N>=2)
        {
            printf("%d nota(s) de R$ 2,00\n",N/2);
            N=N%2;
        }
        else printf("%d nota(s) de R$ 2,00\n",0);
    }

        if (N==0) printf("%d nota(s) de R$ 1,00\n",0);

        else printf("%d nota(s) de R$ 1,00\n",1);







}


