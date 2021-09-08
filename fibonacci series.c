#include<stdio.h>
void main()
{
 int a=0,b=1,c,n;         // 0 1 1 2 3 5 8 13
 scanf("%d",&n);
 while(a<=n)
 {
  printf(" %d ",a);
  c=a;
  a=b;
  b=b+c;
 }

}
