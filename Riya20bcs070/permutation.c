#include<stdio.h>

// function prototype declarations
long factorial(int);
long find_npr(int, int);


int main()
{


    int n, r;
    long npr, ncr;

    printf("Enter the value of n and r respectively: \n\n");
    scanf("%d%d", &n, &r);

    // function calls
    npr = find_npr(n, r);


    printf("\n\n\n\t\t%dC%d = %ld\n", n, r, npr);

    return 0;
}



/*
    function definition for nPr
*/
long find_npr(int a, int b)
{
    return (factorial(a)/factorial(a-b));
}

long factorial(int c)
{
    if(c == 1 || c == 0)
        return 1;
    else
        return c*factorial(c-1);
}