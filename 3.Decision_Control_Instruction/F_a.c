//to check whether the entered no and it's reversed no are same
#include<stdio.h>  

int main(void)    
{
    int n,sum=0,m;    
    printf("Enter a number:");    
    scanf("%d",&n);    
  
    while(n>0)    
    {
        m=n%10;    
        sum=sum+m;    
        n=n/10;   
    }    
    printf("Sum is=%d",sum);    
    
    return 0;  
}  