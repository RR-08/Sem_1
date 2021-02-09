//size of A0,A1......A8
#include <stdio.h>

int main(void)
{
    int h0,w0,h1,w1,h2,w2,h3,w3,h4,w4,h5,w5,h6,w6,h7,w7,h8,w8;
    h0=1189;
    w0=841;
    //hieght is width of the previous size & width is half of the previous hieght
    h1=w0;
    w1=h0/2;    
    h2=w1;
    w2=h1/2;
    h3=w2;
    w3=h2/2;
    h4=w3;
    w4=h3/2;
    h5=w4;
    w5=h4/2;
    h6=w5;
    w6=h5/2;
    h7=w6;
    w7=h6/2;
    h8=w7;
    w8=h7/2;

    printf("Size A0 %d x %d \n",h0,w0);
    printf("Size A1 %d x %d \n",h1,w1);
    printf("Size A2 %d x %d \n",h2,w2);
    printf("Size A3 %d x %d \n",h3,w3);
    printf("Size A4 %d x %d \n",h4,w4);
    printf("Size A5 %d x %d \n",h5,w5);
    printf("Size A6 %d x %d \n",h6,w6);
    printf("Size A7 %d x %d \n",h7,w7);
    printf("Size A8 %d x %d \n",h8,w8);

    return 0;

    
}