#include<stdio.h>
#include<conio.h>
int func()
{
 static int c=5;
c++;
 return c;
}
void main()
{
printf("%d\n",func());
printf("%d\n",func());
printf("%d\n",func());
}
