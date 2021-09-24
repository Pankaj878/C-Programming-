#include<stdio.h>
void main()
{
 int d=0,e,c;
 printf("Enter your old pin=");
 scanf("%d",&e);
 for (d=0;d<3;d++)
if (e==1122)
  {
    printf("Enter your new pin=");
    scanf("%d",&c);
    printf("Your new pin %d set successfully",c);
    break;
  }
  else if (d==2)
   {
       printf("You have reach a maximum number of attemed\nTry after some time");
   }
else
   {
    printf("Wrong input\n Please try again\n Your old pin=");
    scanf("%d",&e);
   }

    }
