/* In an imaginary country called Lisarb, all the people are very happy to pay their taxes because they know that doesn’t exist corrupt politicians and the taxes are used to benefit the population, without any misappropriation. The currency of this country is Rombus, whose symbol is R$.

Read a value with 2 digits after the decimal point, equivalent to the salary of a Lisarb inhabitant. Then print the due value that this person must pay of taxes, according to the table below.

    From RS 0.00 to RS 2,000.00 -> 0% tax (without tax)

    From RS 2,000.01 to RS 3,000.00 -> 8% tax

    From RS 3,000.01 to RS 4,500.00 -> 18% tax

    More than RS 4,500.00 -> 28% tax


Remember, if the salary is R$ 3,002.00 for example, the rate of 8% is only over R$ 1,000.00, because the salary from R$ 0.00 to R$ 2,000.00 is tax free. In the follow example, the total rate is 8% over R$ 1000.00 + 18% over R$ 2.00, resulting in R$ 80.36 at all. The answer must be printed with 2 digits after the decimal point.
Input

The input contains only a float-point number, with 2 digits after the decimal point.
Output

Print the message "R$" followed by a blank space and the total tax to be payed, with two digits after the decimal point. If the value is up to 2000, print the message "Isento".




*/


#include <stdio.h>

int main()
{

    float sal,r1,r2,r3,tax;
    sal=0;

    scanf("%f",&sal);

    if (sal>=0.00 && sal<2000.00)
        printf ("Isento\n");
    else
    {
        if(sal>=2000.00 && sal<=3000.00)
        {
            r1=8.00/100;
            float sal2=sal-2000;
            tax= (sal2*r1);
            printf("R$ %.2f\n",tax);
        }

        else if(sal>=3000.01 && sal<=4500.00)
        {
            float sal2=sal-2000-1000;
            r1=18.00/100;
            r2=8.00/100;


            tax=(1000*r2)+(sal2*r1);
            printf("R$ %.2f\n",tax);
        }

        else if(sal>4500.00)
        {
            float sal2=sal-2000-1000-1500;


            r1=28.00/100;
            r2=18.00/100;
            r3=8.00/100;

            tax=(1000*r3)+(1500*r2)+(sal2*r1);


            printf("R$ %.2f\n",tax);
        }


    }





    return 0;
}

