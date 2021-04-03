#include<stdio.h>
int main(void)
{
char name[25];
printf("Enter full name:");
scanf("%[^\n]s",name);
printf("%s",name);
return 0;
}
