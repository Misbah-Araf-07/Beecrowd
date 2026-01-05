/*Peter is organizing an event in his University. The event will be in April month, beginning and finishing within April month. The problem is: Peter wants to calculate the event duration in seconds, knowing obviously the begin and the end time of the event.

You know that the event can take from few seconds to some days, so, you must help Peter to compute the total time corresponding to duration of the event.
Input

The first line of the input contains information about the beginning day of the event in the format: “Dia xx”. The next line contains the start time of the event in the format presented in the sample input. Follow 2 input lines with same format, corresponding to the end of the event.
Output

Your program must print the following output, one information by line, considering that if any information is null for example, the number 0 must be printed in place of W, X, Y or Z:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)

Obs: Consider that the event of the test case have the minimum duration of one minute. “dia” means day, “hora” means hour, “minuto” means minute and “Segundo” means second in Portuguese.
*/

#include <stdio.h>

int main() {
    int d1, h1, m1, s1;
    int d2, h2, m2, s2;
    char dummy[5];

    scanf("%s %d", dummy, &d1);
    scanf("%d %*c %d %*c %d", &h1, &m1, &s1);
    
    scanf("%s %d", dummy, &d2);        
    scanf("%d %*c %d %*c %d", &h2, &m2, &s2); 

    int start = d1*86400 + h1*3600 + m1*60 + s1;
    int end   = d2*86400 + h2*3600 + m2*60 + s2;

    int diff = end - start;

    int days = diff / 86400;
    diff %= 86400;

    int hours = diff / 3600;
    diff %= 3600;

    int mins = diff / 60;
    int secs = diff % 60;

    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", mins);
    printf("%d segundo(s)\n", secs);

    return 0;
}
































