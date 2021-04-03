#include <stdio.h>

int main(void) //or use int main()
{
    float l,b,areaR,perR;

    printf("Enter length & breath of the rectangle : ");
    scanf("%f %f",&l,&b);


 //calculations for rectangle
    areaR=l*b;
    perR=2*(l+b);


    printf("For Rectangle \nArea : %.2f Perimeter : %.2f\n",areaR,perR); 


    return 0;

}