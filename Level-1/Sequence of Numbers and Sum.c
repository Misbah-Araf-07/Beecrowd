/*


Read an undetermined number of pairs values M and N (stop when any of these values is less or equal to zero). For each pair, print the sequence from the smallest to the biggest (including both) and the sum of consecutive integers between them (including both).
Input

The input file contains pairs of integer values M and N. The last line of the file contains a number zero or negative, or both.
Output

For each pair of numbers, print the sequence from the smallest to the biggest and the sum of these values, as shown below.
5 2      2 3 4 5 Sum=14
6 3      3 4 5 6 Sum=18 
5 0           X


*/


#include <stdio.h>

int main() {

    int M,N;
    M=0 , N=0;

        for(int t=0; ; )
    {   scanf("%d %d", &M, &N);
        if (M<=0 || N<=0 ) break;
        if (M>N)
        {
        int temp=0;
        temp=M;
        M=N;
        N=temp;
        }

        int adder=0;

        for (int y=M; y<=N; )
        {
            printf("%d ",y);

            adder+=y;
            y++;
        }

        printf("Sum=%d\n",adder);
        t++;


    }




    return 0;
}
