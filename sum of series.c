#include<stdio.h>
void main()
{
 int a,b,c=0;
 printf("max.=\n");
 scanf("%d",&b);
 printf("min.=\n");
 scanf("%d",&a);
 printf("your table=");
 for (b;b>=a;b-=2)
 {
    if (b==a||b==a-1||b==a+1)
    {
        printf("%d=",b);
        c=c+b;
        break;
    }
    else
    {
        printf("%d+",b);
        c=c+b;
    }
 }
 printf("%d",c);
}
