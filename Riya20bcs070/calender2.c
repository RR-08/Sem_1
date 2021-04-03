#include<stdio.h>

#include<time.h>

clock_t start, end;

double cpu_time_used;

int main(void){
    int leapdays,firstday,yr;
    long int normaldays,totaldays;

    printf("Enter year");
    scanf("%d",&yr);

    start= clock();

    normaldays=(yr-1)*365L;
    leapdays=(yr-1)/4-(yr-1)/100+(yr-1)/400;
    totaldays=normaldays+leapdays;
    firstday=totaldays%7;

    if (firstday==0)
    printf("monday");

    if (firstday==1)
    printf("tuesday");

    if (firstday==2)
    printf("wednesday");

    if (firstday==3)
    printf("thursday");

    if (firstday==4)
    printf("friday");

    if (firstday==5)
    printf("saturday");

    if (firstday==6)
    printf("sunday");

    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nthe time take by program is %f",cpu_time_used);





    return 0;
       

    


}