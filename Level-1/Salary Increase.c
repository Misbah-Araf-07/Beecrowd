/*  The company ABC decided to give a salary increase to its employees, according to the following table:

Salary 	Readjustment Rate
[
0 - 400.00 : 15%
400.01 - 800.00 : 12%
800.01 - 1200.00 : 10%
1200.01 - 2000.00 : 7%
Above 2000.00 : 4%
]	

Read the employee's salary, calculate and print the new employee's salary, as well the money earned and the increase percentual obtained by the employee, with corresponding messages in Portuguese, as the below example.

Input   The input contains only a floating-point number, with 2 digits after the decimal point.
Output  Print 3 messages followed by the corresponding numbers (see example) informing the new salary, the among of money earned (both must be shown with 2 decimal places) and the percentual obtained by the employee. Note:
Novo salario:  means "New Salary"
Reajuste ganho: means "Money earned"
*/


#include <stdio.h>
int main ()
{   
    double mont;
    scanf("%lf", &mont);
    double sal, rate;

    if (mont <= 400.00) {
        rate = 0.15;
    }
    else if (mont <= 800.00) {
        rate = 0.12;
    }
    else if (mont <= 1200.00) {
        rate = 0.10;
    }
    else if (mont <= 2000.00) {
        rate = 0.07;
    }
    else {
        rate = 0.04;
    }
    
    sal = mont * (1 + rate);
    double reajuste = mont * rate;
    
    printf("Novo salario: %.2lf\n", sal);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %.0f %%\n", rate * 100);
    
    return 0;
}


