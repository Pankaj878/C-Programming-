#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter how many star(*) you want:");
    scanf("%d",&d);

for(a=1;a<=d;a++)

{
 for(c=d-1;c>=a;c--)
 {
   printf(" ");}
 for(b=1;b<=a;b++)
 {
     printf("* ");
 }

   printf("\n");
}
if(a>d)
{
    for(a=d-1;a>=1;a--)
    {
      for(c=d-1;c>=a;c--)
      {
          printf(" ");
      }
    for(b=1;b<=a;b++)
    {
        printf("* ");
    }
    printf("\n");
    }
}
}
