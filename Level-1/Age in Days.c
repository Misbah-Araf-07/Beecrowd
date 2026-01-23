/*
Read an integer value corresponding to a person's age (in days) and print it in years, months and days, followed by its respective message “ano(s)”, “mes(es)”, “dia(s)”.

Note: only to facilitate the calculation, consider the whole year with 365 days and 30 days every month. In the cases of test there will never be a situation that allows 12 months and some days, like 360, 363 or 364. This is just an exercise for the purpose of testing simple mathematical reasoning.
Input
 
The input file contains 1 integer value.
Output

Print the output, like the following example.
*/

#include <stdio.h>

int main ()

{   int d;
    scanf("%d",&d);

    {
    if (d>=365){
        printf("%d ano(s)\n",d/365);
        d=d%365;
        }
    else printf("0 ano(s)\n");
    }



    {
    if (d>=30){
        printf("%d mes(es)\n",d/30);
        d=d%30;
     }
    else printf("0 mes(es)\n");
    }


    if (d<30 && d>=0)  printf("%d dia(s)\n",d);
    return 0;
}

