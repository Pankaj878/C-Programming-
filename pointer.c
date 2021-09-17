#include<stdio.h>
void main()
{
    int t=10;
    int*p=&t;
    printf("%d\n",*p);
    printf("%x\n",p);
    printf("%x\n",&p);
    printf("%x\n",&t);
    printf("%d\n",t);
}
