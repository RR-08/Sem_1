//program to interchange the value of two variable
#include <stdio.h>

int c,d,e;

int main(void)
{
    printf("Enter C:");
    scanf("%d",&c);

    printf("Enter D:");
    scanf("%d",&d);

    e=c;
    c=d;
    d=e;

    printf("C=%d and D=%d",c,d);

    return 0;
}