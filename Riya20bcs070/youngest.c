//youngest of three people
#include <stdio.h>

int a,b,c,young;

int main(void)
{
    printf("Enter the age of Ram:");
    scanf("%d",&a);

    printf("Enter the age of Shyam:");
    scanf("%d",&b);

    printf("Enter the age of Ajay:");
    scanf("%d",&c);

    if (a<b)
    {
        if(a<c)
        printf("Ram is youngest");
        else if(a>c)
        printf("Ajay is yongest");
        else
        printf("Ajay and Ram are younger");

    }
    else if (a==b)
    {
        if(a<c)
        printf("Ram and Shyam are younger");
        else if(a>c)
        printf("Ajay is yongest");
        else
        printf("All are of same age"); 
    }
    else
    {
        if(b>c)
        printf("Ajay is youngest");
        else if(b<c)
        printf("Shyam is youngest");
        else
        printf("Ajay and Shyam are younger");
    }

    
    return 0;
}