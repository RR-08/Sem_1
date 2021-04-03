//check whether a triangle is valid or not
#include <stdio.h>

int a,b,c,sum;

int main(void)
{
    printf("Enter the angles of triangle:");
    scanf("%d %d %d",&a,&b,&c);

    sum = a+b+c;
    
    if (b>0&&a>0&&c>0&&sum==180)
    {
        printf("It is a valid triangle");
    }
    else
    printf("It is not a valid triangle");


    return 0;
    
}