/*Fahrenhiet to centigrade degree */
#include<stdio.h>

int main(void)
{
    float tempF,tempC;

    printf("Enter temperature in Fahrenhiet : ");
    scanf("%f",&tempF);      //the value entered is put in variable tempF

    tempC=(tempF-32)*5/9;   //formula to convert F -> C

    printf("The value in degree Centigrade : %.2f C\n",tempC);
    //.2f displays float upto two decimal value

    return 0;
}