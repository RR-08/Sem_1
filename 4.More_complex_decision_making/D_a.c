//program to find if the triangle is isosceles, equilateral or right angled triangle
#include <stdio.h>

int a,b,c; 

int main(void)
{
   printf("Enter the three sides");
   scanf("%d %d %d",&a,&b,&c);

   if(a==b)
   {
      if(a==c)
      printf("It's an equilateral triangle");
      else
      printf("It's an isosceles triangle");

   }
   


   return 0;
}