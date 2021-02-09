//Perimeter and area of rectangle & circle
#include <stdio.h>

int main(void) //or use int main()
{
    float l,b,r,areaR,areaC,perR,circumC;

    printf("Enter length & breath of the rectangle : ");
    scanf("%f %f",&l,&b);

    printf("Enter the radius of the circle : ");
    scanf("%f",&r);
 //calculations for rectangle
    areaR=l*b;
    perR=2*(l+b);
 //calculations for circle
    areaC=3.14*r*r;
    circumC=2*3.14*r;

    printf("For Rectangle \nArea : %.2f Perimeter : %.2f\n",areaR,perR); 
    printf("For Circle \nArea : %.2f Circumference : %.2f\n",areaC,circumC);
    //.2f displays float upto two decimal value

    return 0;

}