/*




Write a program that reads two scores of a student. Calculate and print the average of these scores. Your program must accept just valid scores [0..10]. Each score must be validated separately.
Input

The input file contains many floating-point numbers​​, positive or negative. The program execution will be finished after the input of two valid scores.
Output

When an invalid score is read, you should print the message "nota invalida".
After the input of two valid scores, the message "media = " must be printed followed by the average of the student. The average must be printed with 2 numbers after the decimal point.
*/

#include <stdio.h>

int main() {
    int counter=0;

    double a,b;
    a=0 , b=0;

    for (int t=0; ; )
    {
        if (counter==2)
        {   double put = (a+b)/2.0;
            printf("media = %.2lf\n",put);
            break;
        }

        for (int s=0 ; counter==0 ;)
        {
        scanf("%lf", &a);
        if (a>=0 && a<=10) counter++;
        else printf("nota invalida\n");
        s++;
        }


        for (int r=0 ; counter==1 ;)
        {
        scanf("%lf", &b);
        if (b>=0 && b<=10) counter++;
        else printf("nota invalida\n");
        r++;
        }


    }

    return 0;
}
