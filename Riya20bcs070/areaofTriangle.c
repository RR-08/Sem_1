//program to find the area of triangle using it's side
#include<stdio.h>
#include<math.h>

int a,b,c;
//float a,b,c;
float s,area;

int main (void)
{
    printf("Enter the value of three sides of the triangle:");
    scanf("%d %d %d",&a,&b,&c);

    s = (a+b+c)/2.0;//2.0 instead of 2 to convert the expression into float

    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area = %f",area);

    return 0;

}