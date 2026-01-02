/*


Write an algorithm that reads two floating values (x and y), which should represent the coordinates of a point in a plane. Next, determine which quadrant the point belongs, or if you are at one of the Cartesian axes or the origin (x = y = 0).

If the point is at the origin, write the message "Origem".

If the point is at X axis write "Eixo X", else if the point is at Y axis write "Eixo Y".
Input

The input contains the coordinates of a point.
Output

The output should display the quadrant in which the point is.
Input Sample

*/

#include <stdio.h>
int main ()

{
    double x,y;
    scanf("%lf %lf",&x, &y);

    if(x==0 && y==0) printf("Origem\n");
    if(x==0 && y!=0) printf("Eixo Y\n");
    if(y==0 && x!=0) printf("Eixo X\n");

    if(x>0 && y>0) printf("Q1\n");
    if(x<0 && y>0) printf("Q2\n");
    if(x<0 && y<0) printf("Q3\n");
    if(x>0 && y<0) printf("Q4\n");

    return 0 ;
}
