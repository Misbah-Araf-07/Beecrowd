/*


Read three integers and sort them in ascending order. After, print these values in ascending order, a blank line and then the values in the sequence as they were readed.
Input

The input contains three integer numbers.
Output

Present the output as requested above.
*/

#include <stdio.h>
int main ()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int orig_a = a, orig_b = b, orig_c = c;
    
    int temp;
    if (a > b) { temp = a; a = b; b = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    if (a > b) { temp = a; a = b; b = temp; }
    
    printf("%d\n%d\n%d\n", a, b, c);
    printf("\n");
    

    printf("%d\n%d\n%d\n", orig_a, orig_b, orig_c);
    
    return 0;
}
