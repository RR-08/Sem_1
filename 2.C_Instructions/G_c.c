//use longitute and latitude values to find distance between in nautical miles of 2 places
#include <stdio.h>  
#include <math.h>

double L1,L2,G1,G2,D;

int main(void)
{
    printf("Enter latitued values (L1,L2):");
    scanf("%lf %lf",&L1,&L2);

    printf("Enter longitude values (G1,G2):");
    scanf("%lf %lf",&G1,&G2);

    L1 = L1 *180/3.14;
    L2 = L2 *180/3.14;
    G1 = G1 *180/3.14;
    G2 = G2 *180/3.14;


    D = 3963*cos(sin(L1) * sin(L2)+ cos(L1)*cos(L2)*cos (G2-G1));

    printf("The distance in nautical miles is %lf",D);

    return 0;

}