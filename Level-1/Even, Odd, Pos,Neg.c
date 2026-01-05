/*


Make a program that reads five integer values. Count how many   of these values are even, odd, positive and negative. Print these information like following example.
Input

The input will be 5 integer values.
Output

Print a message like the following example with all letters in lowercase, indicating how many of these values ​​are even, odd, positive and negative.


*/



#include <stdio.h>

int main()
{

    int t,counter_even,counter_odd,counter_pos,counter_neg;
    int a;

    counter_even=0,counter_odd=0,counter_pos=0,counter_neg=0;

    t=0;
    for (; t>=0 && t<=4; )
    {
        scanf("%d",&a);
        t++;

        if (a%2==0)
            counter_even++;
        if (a%2!=0)
            counter_odd++;
        if (a>0)
            counter_pos++;
        if (a<0)
            counter_neg++;


    }


    printf("%d valor(es) par(es)\n",counter_even );
    printf("%d valor(es) impar(es)\n",counter_odd );
    printf("%d valor(es) positivo(s)\n",counter_pos );
    printf("%d valor(es) negativo(s)\n",counter_neg );



    return 0;
}

