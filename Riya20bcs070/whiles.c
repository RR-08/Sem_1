
#include<stdio.h>

int array[5];

int main(void){

    int a=0,nom=0;

    printf("this program wants you to enter 5 numbers\n");
    puts("the number should be between 1 and 10");

    while(a<5)
    {
       nom=0;
        while(nom<1||nom>10)
        {
            printf("Enter %d number:",a+1);
            scanf("%d",&nom);
        }

        array[a]=nom;
        a++;

    }

    for(a=0;a<5;a++){

    printf("%d number value was:%d\n",a+1,array[a]);
    }
    return 0;
}