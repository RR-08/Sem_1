//program to find if the number is odd or even
#include <stdio.h>

int no;

int main(void)
{
    printf("Enter a integer:");
    scanf("%d",&no);

    if (no%2==0)
    printf("Even");
    else
    printf("Odd");

    return 0;
}