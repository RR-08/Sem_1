#include<stdio.h>

int main(void)
{
    int p=1,i,fact=1,number,a;
  do
    {

        printf("Enter a number: ");    
        scanf("%d",&number);  

        printf("what to do from the menu\n");
        puts("1-Find factorial");
        puts("2-Find no raised to itself");
        puts("3-to exit");

        scanf("%d",&a);
 


    switch (a)
    {
    case 1:for(i=1;i<=number;i++){    
               fact=fact*i;}
                printf("%d\n",fact);
        break;
    case 2: 
             for(i=1;i<=number;i++)
            {    
             p=p*number;
            }
            printf("%d\n",p);
        break;    
    default: printf("You quit")  ;
           
        break;
    }

    } while (a!=3);

    return 0;
    
}