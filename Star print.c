#include<stdio.h>
void main()
{
    int a,b;
    for(a=0;a<8;a+=2)
    {
    for(b=0;b<=a;b++)
    {
    printf(" *");
    }
    printf("\nBlack Line\n");
    }
}
