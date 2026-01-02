/*


Read the start time and end time of a game, in hours and minutes (initial hour, initial minute, final hour, final minute). Then print the duration of the game, knowing that the game can begin in a day and finish in another day,

Obs.: With a maximum game time of 24 hours and the minimum game time of 1 minute.
Input

Four integer numbers representing the start and end time of the game.
Output

Print the duration of the game in hours and minutes, in this format: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” . Which means: the game lasted XXX hour(s) and YYY minutes.

*/

#include <stdio.h>
int main ()
{
    int a_h, a_m, b_h, b_m;
    scanf("%d %d %d %d", &a_h, &a_m, &b_h, &b_m);

    int start_minutes = a_h * 60 + a_m;
    int end_minutes = b_h * 60 + b_m;

    int duration_minutes;
    if (start_minutes == end_minutes)
    {
        duration_minutes = 24 * 60;
    }
    else if (end_minutes > start_minutes)
    {
        duration_minutes = end_minutes - start_minutes;
    }
    else
    {
        duration_minutes = (24 * 60 - start_minutes) + end_minutes;
    }

    int hr = duration_minutes / 60;
    int min = duration_minutes % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr, min);
    return 0;
}
