//program to print trignometric ratios of input angle
#include <stdio.h>
#include <math.h>

float angle,s,c,t;

int main(void)
{
    printf("Enter angle:");
    scanf("%f",&angle);

   angle = angle * 3.14/180;

    s= sin(angle);
    c= cos(angle);
    t= tan(angle);

    printf("Sin=%.2f  Cos=%.2f  Tan=%.2f",s,c,t);
    return 0;
}