
#include <stdio.h>

int main(void) //or use int main()
{
    float r,areaC,circumC;

    printf("Enter the radius of the circle : ");
    scanf("%f",&r);

 //calculations for circle
    areaC=3.14*r*r;
    circumC=2*3.14*r;

  
    printf("For Circle \nArea : %.2f Circumference : %.2f\n",areaC,circumC);
    //.2f displays float upto two decimal value

    return 0;

}