#include<stdio.h>
#include<stdlib.h>

int x,y,ans;
int sum(int a,int b);


int main(void)
{

    puts("enter two number:");//prints and start new line
    scanf("%d %d",&x,&y);

    ans=sum(x,y);
    printf("sum of two numbers is %d\n",ans);
}

int sum(int a,int b){
    return (a+b);
}

