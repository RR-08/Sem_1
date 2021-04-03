#include<stdio.h>
#include<stdlib.h>

int x,y,ans;

int multip(int a,int b);


int main(void){

    puts("enter two number:");//prints and start new line
    scanf("%d %d",&x,&y);

    ans=multip(x,y);
    printf("product of two numbers is %d\n",ans);

    return 0;

}
int multip(int a,int b)
{
        return (a*b);
}