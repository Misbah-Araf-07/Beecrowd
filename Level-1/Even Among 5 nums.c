

/*


Make a program that reads five integer values. Count how many of these values ​​are even and  print this information like the following example.
Input

The input will be 5 integer values.
Output

Print a message like the following example with all letters in lowercase, indicating how many even numbers were typed.

}

*/






#include <stdio.h>

int main() {

    int t,counter ;
    int a;
    double b;
    t=0;
    for (;t>=0 && t<=4; )
    {   scanf("%d",&a);
        t++;

        if (a%2==0)
        {
            counter++;


        }

    }
    printf("%d valores pares\n",counter);



    return 0;
}
