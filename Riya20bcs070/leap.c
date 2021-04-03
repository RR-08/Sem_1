#include <stdio.h>

int main()
{
    int year;

    puts("Enter year:");
    scanf("%d",&year);
    if (year%400 == 0||year % 100!=0&&year%4==0)
    printf("Leap year");
    else
    printf("Not a leap year");

    return 0;
}
