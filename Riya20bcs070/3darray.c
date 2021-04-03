//1000 element array
#include<stdio.h>
#include<stdlib.h>

int array[10][10][10];
int a,b,c;

int main(void){

    for(a = 0;a < 10;a++)
    {
        for (b = 0; b < 10; b++)
        {
            for(c = 0 ;c < 10;c++)
            {
                array[a][b][c]=rand();

            }
        }
        
    }

        for(a=0;a<10;a++)
    {
        for (b = 0; b < 10; b++)
        {
            for(c=0;c<10;c++)
            {
                printf("array[%d][%d][%d]=%d\n",a,b,c,array[a][b][c]);
            }
            
            printf("enter to continue ctrl c to quit");
            
            getchar();
        }
        
    }

    return 0;
}
