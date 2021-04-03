#include<stdio.h>

int main(void)
{
    int s[3];

    int e;

    for (e=0;e<3;e++)
    {
        printf("Enter marks of %d student:",e+1);
        scanf("%d",&s[e]);
    }
    for (e=0;e<3;e++)
    {
        printf(" marks of %d student is %d\n",e+1,s[e]);
        
    }

    return 0;
}