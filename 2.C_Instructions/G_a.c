//sum of digits of five digit number
#include <stdio.h>

int num,l,a,sum=0;

int main(void)
{
    printf("Enter a 5 digit number :");
    scanf("%d",&num);

    l=num%10; //gives last digits 
    a=num/10;  //remaining digits
    sum+=l;   //sums last digit

    l=a%10;
    a=a/10;
    sum+=l;

    l=a%10;
    a=a/10;
    sum+=l;

    l=a%10;
    a=a/10;
    sum+=l;

    l=a%10;
    sum+=l;

    printf("The sum of digits of %d is %d",num,sum);

    return 0;

}