//Program to find wind chill factor using temperature & wind velocity
#include <stdio.h>
#include <math.h>

float temp,windVel,wcf;

int main(void)
{
    printf("Enter the value of temperature:");
    scanf("%f",&temp);

    printf("Enter the value of wind velocity:");
    scanf("%f",&windVel);

    //formula to calculate wind chill factor
    wcf = 35.74 + 0.6215 * temp +(0.4275 * temp - 35.75) * pow(windVel,0.16);
    
    printf("Wind chill factor is %.2f",wcf);

    return 0;
}