#include<stdio.h>
#include<stdlib.h>

int x,y,ans;

int minus(int a,int b);


int main(void){

    puts("enter two number:");//prints and start new line
    scanf("%d %d",&x,&y);

    ans=minus(x,y);
    printf("minus of two numbers is %d\n",ans);

    return 0;

}
int minus(int a,int b){
    return (a-b);
}