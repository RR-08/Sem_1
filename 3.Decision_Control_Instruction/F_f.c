//check if the given points lie on same line
#include <stdio.h>

int x1,y,x2,y2,x3,y3;

int main(void)
{
    printf("Enter the x coordinates of 3 points:");
    scanf("%d %d %d",&x1,&x2,&x3);

    printf("Enter the y coordinates of 3 points:");
    scanf("%d %d %d",&y,&y2,&y3);

    if((y2-y)==(y3-y2)&&(x2-x1)==(x3-x2))
    {
        printf("The given points lie on same line.");
   
    }
    else
    {
        printf("The given points do not lie on same line.");    
    }
    return 0;

    
    
}