#include<stdio.h>

char str[20];

int main(void)
{
    printf("Enter something:");
    scanf("%[^\n]%*c",str);
    printf("%s",str);

    return 0;

}