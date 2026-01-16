/*



Write a program that reads two integer numbers X and Y and calculate the sum of all number not divisible by 13 between them, including both.
Input

The input file contains 2 integer numbers X and Y without any order.
Output

Print the sum of all numbers between X and Y not divisible by 13, including them if it is the case.
*/




#include <stdio.h>

int main()
{
    int X=0,Y=0,sum=0 ;
    scanf("%d %d", &X, &Y);
    if (X>Y)
        {
            int temp=0;
            temp = X;
            X=Y;
            Y=temp;
        }



        for (int t=X; t<=Y; t++)
        {
            if (t%13!=0) sum+=t;

        }


    printf("%d\n",sum);
    return 0;
}
