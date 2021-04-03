//program to find simple interest 
#include <stdio.h>

float p,r,t,si;

int main(void)
{
    printf("Enter the value of p, t, r:");
    scanf("%f %f %f",&p,&t,&r);

    si = p * r * t / 100 ;

    printf("The simple interest  is %f",si);

    return 0;
}