#include<stdio.h>
#include<stdlib.h>

int x,y,ans;
int sum(int a,int b);
int multip(int a,int b),minus(int a,int b);
int larger(int a,int b);

int main(void){

    puts("enter two number:");//prints and start new line
    scanf("%d %d",&x,&y);

    larger(x,y);
    printf("larger of the two no is %d",larger(x,y));



    return 0;


}
int larger(int a,int b){
    return (a>b?a:b);
}