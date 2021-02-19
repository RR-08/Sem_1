//to find if the point lie on x axis , y axis or at origin
#include <stdio.h>

int x,y;

int main(void)
{
    printf("Enter x and y cordinate of the point:");
    scanf("%d %d",&x,&y);

    if(x==0)
    {
        if (y==0)
        printf("The point lie on origin.");

     printf("The point lie on y axis.");
    }

    else if (y==0)
    printf("The point lie on x axis.");

    else
    printf("The point does not lie on x axis, y axis and origin.");

    return 0;
}