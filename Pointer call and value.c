#include<stdio.h>

changea(int*new)
{
    *new=4+3;
}
changeb(int*new)
{
    *new=4-3;
}
void main()
{
 int a=4,b=3;
 printf("a=%d\nb=%d\n",a,b);
 changea(&a);
 changeb(&b);
 printf("a=%d\nb=%d",a,b);

}
