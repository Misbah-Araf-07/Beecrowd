/*



Read two integer values X and Y. Print the sum of all odd values between them.
Input

The input file contain two integer values.
Output

The program must print an integer number. This number is the sum off all odd values between both input values that must fit in an integer number.
*/

#include <stdio.h>

int main() {

    int n, m;
    int b = 0;    

    scanf("%d %d", &n, &m);

    if (n > m) {
        int temp = n;
        n = m;
        m = temp;
    }

    n++;           
    for ( ; n < m; n++ ) {
        if (n % 2 != 0)   
            b += n;
    }

    printf("%d\n", b);

    return 0;
}
