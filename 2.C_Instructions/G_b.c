//Cartesian coordinates to polar coordinates
#include <stdio.h>
#include <math.h>

double x,y;
double r,o;

int main(void)
{
    printf("Enter the cartesian coordinates x and y :");
    scanf("%lf %lf",&x,&y);

    r = sqrt(x*x+y*y);
    o = atan2(y,x);
    o = o*180/3.14;

    printf("The polar coordinates of (%.2lf,%.2lf) are (%.2lf,%.2lf).",x,y,r,o);

    return 0;
    



}
