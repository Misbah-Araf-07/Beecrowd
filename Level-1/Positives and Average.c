/*


Read 6 values that can be floating point numbers. After, print how many of them were positive. In the next line, print the average of all positive values typed, with one digit after the decimal point.
Input

The input consist in 6 numbers that can be integer or floating point values. At least one number will be positive.
Output

The first output value is the amount of positive numbers. The next line should show the average of the positive values ​typed.


*/






#include <stdio.h>

int main() {

    int t,counter ;
    double a;
    double b;
    b=0;
    t=0;
    for (;t>=0 && t<=5; )
    {   scanf("%lf",&a);
        t++;

        if (a>0)
        {
            counter++;
            b+=a;

        }

    }
    printf("%d valores positivos\n",counter);
    printf("%.1lf\n",b/counter);


    return 0;
}
