#include<stdio.h>
#include<conio.h>
int main(void)
{
  double a[4],*p;
  //int a[2],*p;
  int i;

  p=a;
  printf("%d\n",sizeof(int));

   for(i=0;i<4;i++)
   scanf("%ld",(p+i));// pointer
  // scanf("%f",&a[i]);

    for(i=0;i<4;i++)  // just to check if value is stored as float
    printf("%ld\n",*(p+i));
   // printf("%.2f\n",a[i]); 

    for ( i = 0; i < 4; i++)
    {
       printf("%i\n",(p+i));
      //  printf("%i\n",&a[i]);  i cause address is integer value
    }

   return 0;

  

}