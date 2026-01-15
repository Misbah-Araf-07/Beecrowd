/*


Maria has just started as graduate student in a medical school and she's needing your help to organize a laboratory experiment which she is responsible about. She wants to know, at the end of the year, how many animals were used in this laboratory and the percentage of each type of animal is used at all.

This laboratory uses in particular three types of animals: frogs, rats and rabbits. To obtain this information, it knows exactly the number of experiments that were performed, the type and quantity of each animal is used in each experiment.
Input

The first line of input contains an integer N indicating the number of test cases that follows. Each test case contains an integer Amount (1 ≤ Amount ≤ 15) which represents the amount of animal used and a character Type ('C', 'R' or 'S'), indicating the type of animal:
- C: Coelho (rabbit in portuguese)
- R: Rato (rat  in portuguese)
- S: Sapo (frog in portuguese)
Output

Print the total of animals used, the total of each type of animal and the percentual of each one in relation of the total of animals used. The percentual must be printed with 2 digits after the decimal point.
*/

#include <stdio.h>

int main()
{
    int N, D, t;
    char C;
    int X = 0, ac = 0, ar = 0, as = 0;
    scanf("%d", &N);
    for (t = 1; t <= N; t++)
    {
        scanf("%d", &D);
        scanf(" %c", &C);
        
        X += D;
        if (C == 'C') ac += D;
        else if (C == 'R') ar += D;
        else if (C == 'S') as += D;
    }

    printf("Total: %d cobaias\n", X);
    printf("Total de coelhos: %d\n", ac);
    printf("Total de ratos: %d\n", ar);
    printf("Total de sapos: %d\n", as);
    printf("Percentual de coelhos: %.2lf %%\n", ((double)ac / (double)X) * 100);
    printf("Percentual de ratos: %.2lf %%\n", ((double)ar / (double)X) * 100);
    printf("Percentual de sapos: %.2lf %%\n", ((double)as / (double)X) * 100);
    return 0;
}
